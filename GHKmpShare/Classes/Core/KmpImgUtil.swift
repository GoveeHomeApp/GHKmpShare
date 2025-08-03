//
//  KmpImgProcessor.swift
//  GHKmpShare
//
//  Created by sy on 2025/8/4.
//

import Foundation
import UIKit
import Accelerate
import MobileCoreServices
import ImageIO

class KmpImgUtil {
    
    // MARK: - Public Methods
    
    /// ARGB Int值生成png图片
    /// - Parameters:
    ///   - width: 图片宽（像素)
    ///   - height: 图片高（像素)
    ///   - argbColors: ARGB格式的Int颜色数组
    static func getPngImageData(width: UInt32, height: UInt32, argbColors: [Int]) -> Data {
        if argbColors.isEmpty {
            return Data()
        }
        let imageW = Int(width)
        let imageH = Int(height)
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel = 4 // 一个像素四个分量，即ARGB
        let bytesPerRow = bytesPerPixel * imageW
        let rawData = UnsafeMutablePointer<UInt8>.allocate(capacity: imageH * imageW * bytesPerPixel)
        defer { rawData.deallocate() }
        
        let bitsPerComponent = 8 // 每个分量8个字节
        guard let context = CGContext(data: rawData,
                                    width: imageW,
                                    height: imageH,
                                    bitsPerComponent: bitsPerComponent,
                                    bytesPerRow: bytesPerRow,
                                    space: colorSpace,
                                    bitmapInfo: CGImageAlphaInfo.noneSkipLast.rawValue | CGBitmapInfo.byteOrder32Big.rawValue) else {
            return Data()
        }
        
        var i = 0
        for y in 0..<imageH {
            for x in 0..<imageW {
                let byteIndex = bytesPerRow * y + bytesPerPixel * x
                let argbColor = argbColors[i]
                
                // 从ARGB Int值中提取各个颜色分量
                let alpha = UInt8((argbColor >> 24) & 0xFF)
                let red = UInt8((argbColor >> 16) & 0xFF)
                let green = UInt8((argbColor >> 8) & 0xFF)
                let blue = UInt8(argbColor & 0xFF)
                
                // 按照RGBA顺序存储到rawData中
                rawData[byteIndex] = red
                rawData[byteIndex + 1] = green
                rawData[byteIndex + 2] = blue
                rawData[byteIndex + 3] = 255 // 固定alpha为255（不透明）
                i += 1
            }
        }
        
        guard let imageRef = context.makeImage() else {
            return Data()
        }
        
        guard let nonAlphaImageRef = nonAlphaImage(from: imageRef) else {
            return Data()
        }
        
        let newImageData = CFDataCreateMutable(nil, 0)!
        guard let destination = CGImageDestinationCreateWithData(newImageData, kUTTypePNG, 1, nil) else {
            return Data()
        }
        
        CGImageDestinationAddImage(destination, nonAlphaImageRef, nil)
        if !CGImageDestinationFinalize(destination) {
            print("Failed to write Image")
        }
        
        let newImage = newImageData as Data
        let pngData = makePngData(from: newImage)
        
        #if DEBUG
        DispatchQueue.main.asyncAfter(deadline: .now() + 1) {
            writeImage(pngData, parse: false)
        }
        #endif
        
        return pngData
    }
    
    /// 写png图片到本地
    /// - Parameters:
    ///   - pngData: png图片
    ///   - parse: 是否解析
    static func writeImage(_ pngData: Data, parse: Bool) {
        guard let documentsPath = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true).first else {
            return
        }
        
        let fileName: String
        if parse {
            fileName = "parse_picture.png"
        } else {
            fileName = "\(Int(Date().timeIntervalSince1970))_picture.png"
        }
        
        let path = (documentsPath as NSString).appendingPathComponent(fileName)
        try? pngData.write(to: URL(fileURLWithPath: path))
    }
    
    static func createImage(from argbColors: [Int], width: CGFloat, height: CGFloat) -> UIImage? {
        UIGraphicsBeginImageContextWithOptions(CGSize(width: width, height: height), false, 1)
        
        guard let context = UIGraphicsGetCurrentContext() else {
            UIGraphicsEndImageContext()
            return nil
        }
        
        let imageW = Int(width)
        let imageH = Int(height)
        
        for y in 0..<imageH {
            for x in 0..<imageW {
                let index = imageW * y + x
                let argbColor = argbColors[index]
                
                // 从ARGB Int值转换为UIColor
                let alpha = CGFloat((argbColor >> 24) & 0xFF) / 255.0
                let red = CGFloat((argbColor >> 16) & 0xFF) / 255.0
                let green = CGFloat((argbColor >> 8) & 0xFF) / 255.0
                let blue = CGFloat(argbColor & 0xFF) / 255.0
                
                let color = UIColor(red: red, green: green, blue: blue, alpha: alpha)
                
                let rect = CGRect(x: x, y: y, width: 1, height: 1)
                context.setFillColor(color.cgColor)
                context.fill(rect)
            }
        }
        
        let image = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        
        return image
    }
    
    // MARK: - Utility Methods for ARGB Conversion
    
    /// 将ARGB Int值转换为UIColor
    static func colorFromARGB(_ argb: Int) -> UIColor {
        let alpha = CGFloat((argb >> 24) & 0xFF) / 255.0
        let red = CGFloat((argb >> 16) & 0xFF) / 255.0
        let green = CGFloat((argb >> 8) & 0xFF) / 255.0
        let blue = CGFloat(argb & 0xFF) / 255.0
        
        return UIColor(red: red, green: green, blue: blue, alpha: alpha)
    }
    
    /// 将UIColor转换为ARGB Int值
    static func argbFromColor(_ color: UIColor) -> Int {
        var red: CGFloat = 0
        var green: CGFloat = 0
        var blue: CGFloat = 0
        var alpha: CGFloat = 0
        
        color.getRed(&red, green: &green, blue: &blue, alpha: &alpha)
        
        let a = Int(alpha * 255) & 0xFF
        let r = Int(red * 255) & 0xFF
        let g = Int(green * 255) & 0xFF
        let b = Int(blue * 255) & 0xFF
        
        return (a << 24) | (r << 16) | (g << 8) | b
    }
    
    // MARK: - Private Methods
    
    private static func nonAlphaImage(from image: CGImage) -> CGImage? {
        // vImage格式定义
        let vImageFormatRGBA8888 = vImage_CGImageFormat(
            bitsPerComponent: 8,
            bitsPerPixel: 32,
            colorSpace: nil,
            bitmapInfo: CGBitmapInfo(rawValue: CGImageAlphaInfo.premultipliedLast.rawValue | CGBitmapInfo.byteOrder32Big.rawValue),
            version: 0,
            decode: nil,
            renderingIntent: .defaultIntent
        )
        
        let vImageFormatRGB565 = vImage_CGImageFormat(
            bitsPerComponent: 5,
            bitsPerPixel: 16,
            colorSpace: nil,
            bitmapInfo: CGBitmapInfo(rawValue: CGBitmapInfo.byteOrder16Little.rawValue | CGImageAlphaInfo.none.rawValue),
            version: 0,
            decode: nil,
            renderingIntent: .defaultIntent
        )
        
        var inputBuffer = vImage_Buffer()
        var outputBuffer = vImage_Buffer()
        
        defer {
            if inputBuffer.data != nil {
                free(inputBuffer.data)
            }
            if outputBuffer.data != nil {
                free(outputBuffer.data)
            }
        }
        
        var format = vImageFormatRGBA8888
        let result = vImageBuffer_InitWithCGImage(&inputBuffer, &format, nil, image, vImage_Flags(kvImageNoFlags))
        if result != kvImageNoError {
            return nil
        }
        
        outputBuffer.width = inputBuffer.width
        outputBuffer.height = inputBuffer.height
        outputBuffer.rowBytes = Int(outputBuffer.width * 2)
        outputBuffer.data = malloc(outputBuffer.rowBytes * Int(outputBuffer.height))
        
        let convertResult = vImageConvert_RGBA8888toRGB565(&inputBuffer, &outputBuffer, vImage_Flags(kvImageNoFlags))
        if convertResult != kvImageNoError {
            return nil
        }
        
        var outputFormat = vImageFormatRGB565
        var error: vImage_Error = kvImageNoError
        guard let outputImage = vImageCreateCGImageFromBuffer(&outputBuffer, &outputFormat, nil, nil, vImage_Flags(kvImageNoFlags), &error) else {
            return nil
        }
        
        if error != kvImageNoError {
            return nil
        }
        
        return outputImage.takeRetainedValue()
    }
    
    private static func makePngData(from pngImageData: Data) -> Data {
        let data = NSMutableData()
        var offset = 0
        
        // 文件签名 png
        let fileSignatureLength = 8
        let fileSignatureData = pngImageData.subdata(in: 0..<fileSignatureLength)
        offset += fileSignatureLength
        data.append(fileSignatureData)
        
        var chunkInfos: [[String: Any]] = []
        while offset < pngImageData.count {
            let chunkInfo = getChunks(from: pngImageData, offset: offset)
            let chunkDataBytes = chunkInfo["chunkDataBytes"] as! Int
            let dataType = chunkInfo["dataType"] as! String
            
            offset += chunkDataBytes
            chunkInfos.append(chunkInfo)
            
            if pngValidTypes().contains(dataType) {
                let chunkData = chunkInfo["chunkData"] as! Data
                data.append(chunkData)
            }
        }
        
        return data as Data
    }
    
    private static func getChunks(from data: Data, offset: Int) -> [String: Any] {
        // 描述chunk数据长度字节数
        let dataLengthBytes = 4
        let dataLengthData = data.subdata(in: offset..<(offset + dataLengthBytes))
        // chunk数据长度
        let dataLength = getLength(from: dataLengthData)
        
        // 描述chunk数据类型字节数
        let dataTypeBytes = 4
        let dataTypeData = data.subdata(in: (offset + dataLengthBytes)..<(offset + dataLengthBytes + dataTypeBytes))
        let dataType = String(data: dataTypeData, encoding: .utf8) ?? ""
        
        // CRC校验字节数
        let dataCRCBytes = 4
        let chunkDataTotalBytes = dataLengthBytes + dataTypeBytes + dataLength + dataCRCBytes
        let chunkData = data.subdata(in: offset..<(offset + chunkDataTotalBytes))
        
        return [
            "dataType": dataType,
            "dataTypeData": dataTypeData,
            "chunkData": chunkData,
            "chunkDataBytes": chunkDataTotalBytes
        ]
    }
    
    private static func getLength(from lengthData: Data) -> Int {
        var length = 0
        let size = lengthData.count
        for i in 0..<size {
            let byte = lengthData[i]
            length += Int(byte) << ((size - i - 1) * 8)
        }
        return length
    }
    
    private static func pngValidTypes() -> [String] {
        return ["IHDR", "IDAT", "IEND"]
    }
}

// MARK: - Data Extension
extension Data {
    func getByte(at index: Int) -> UInt8 {
        assert(index < self.count, "越界了！")
        if self.count <= index {
            return 0
        }
        return self[index]
    }
}
