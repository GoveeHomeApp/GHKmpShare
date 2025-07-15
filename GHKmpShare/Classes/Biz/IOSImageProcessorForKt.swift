import UIKit
import Shared

class IOSImageProcessorForKt: KmpImageProcessor {
    
    func convertPngBytesToColors(pngBytes: KotlinByteArray) -> [KotlinInt] {
        // 正确的数据转换方式
        var data = Data()
        for i in 0..<pngBytes.size {
            let byte = pngBytes.get(index: i)
            data.append(UInt8(bitPattern: byte))
        }
        
        guard let image = UIImage(data: data),
              let cgImage = image.cgImage else {
            return []
        }
        
        let width = cgImage.width
        let height = cgImage.height
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel = 4
        let bytesPerRow = bytesPerPixel * width
        let bitsPerComponent = 8
        
        var pixelData = [UInt32](repeating: 0, count: width * height)
        
        let context = CGContext(data: &pixelData,
                               width: width,
                               height: height,
                               bitsPerComponent: bitsPerComponent,
                               bytesPerRow: bytesPerRow,
                               space: colorSpace,
                               bitmapInfo: CGImageAlphaInfo.noneSkipLast.rawValue)
        
        context?.draw(cgImage, in: CGRect(x: 0, y: 0, width: width, height: height))
        
        return pixelData.map { KotlinInt(value: Int32(bitPattern: $0)) }
    }
    
    func convertColorsToPngBytes(colors: [KotlinInt], width: Int32, height: Int32) -> KotlinByteArray {
        let w = Int(width)
        let h = Int(height)
        let colorSpace = CGColorSpaceCreateDeviceRGB()
        let bytesPerPixel = 4
        let bytesPerRow = bytesPerPixel * w
        
        var pixelData = colors.map { Int32($0.int32Value) }
        
        guard let context = CGContext(data: &pixelData,
                                     width: w,
                                     height: h,
                                     bitsPerComponent: 8,
                                     bytesPerRow: bytesPerRow,
                                     space: colorSpace,
                                     bitmapInfo: CGImageAlphaInfo.noneSkipLast.rawValue),
              let cgImage = context.makeImage() else {
            return KotlinByteArray(size: 0)
        }
        
        let image = UIImage(cgImage: cgImage)
        guard let pngData = image.pngData() else {
            return KotlinByteArray(size: 0)
        }
        
        // 正确的KotlinByteArray构造方式
        let byteArray = KotlinByteArray(size: Int32(pngData.count))
        for (index, byte) in pngData.enumerated() {
            byteArray.set(index: Int32(index), value: Int8(truncating: KotlinByte(value: Int8(bitPattern: byte))))
        }
        return byteArray
    }
    
    func convertPngBytesToColorInfo(pngBytes: KotlinByteArray) -> KmpColorListInfo {
        // 转换数据
        var data = Data()
        for i in 0..<pngBytes.size {
            let byte = pngBytes.get(index: i)
            data.append(UInt8(bitPattern: byte))
        }
        
        guard let image = UIImage(data: data),
              let cgImage = image.cgImage else {
            return KmpColorListInfo(colors: [], width: 0, height: 0)
        }
        
        let colors = convertPngBytesToColors(pngBytes: pngBytes)
        return KmpColorListInfo(colors: colors,
                               width: Int32(cgImage.width),
                               height: Int32(cgImage.height))
    }
}
