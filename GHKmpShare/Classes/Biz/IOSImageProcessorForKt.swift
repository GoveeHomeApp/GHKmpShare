import UIKit
import Shared

class IOSImageProcessorForKt: KmpImageProcessor {
    
//    func saveImageToTemp(image: UIImage, fileName: String) -> URL? {
//        guard let data = image.jpegData(compressionQuality: 0.8) else { return nil }
//        
//        let tempDir = FileManager.default.temporaryDirectory
//        let fileURL = tempDir.appendingPathComponent("\(fileName).png")
//        
//        do {
//            try data.write(to: fileURL)
//            return fileURL
//        } catch {
//            print("保存失败: \(error.localizedDescription)")
//            return nil
//        }
//    }
    
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
        // 使用ARGB格式匹配Android 注意 安卓bitmap alpha通道在前 数据格式为小端模式！！！
        let bitmapInfo = CGImageAlphaInfo.premultipliedFirst.rawValue | CGBitmapInfo.byteOrder32Little.rawValue
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
                               bitmapInfo: bitmapInfo)

        context?.draw(cgImage, in: CGRect(x: 0, y: 0, width: width, height: height))
        return pixelData.map { KotlinInt(value: Int32(bitPattern: $0)) }
    }
    
    
    func convertColorsToPngBytes(colors: [KotlinInt], width: Int32, height: Int32) -> KotlinByteArray {
        
        let swiftArray = colors.compactMap { $0.toSwiftInt() }
        
        let data = KmpImgUtil.getPngImageData(width: UInt32(bitPattern: width), height: UInt32(bitPattern: height), argbColors: swiftArray)

        guard data.count > 0 else {
            return KotlinByteArray(size: 0)
        }
        
        // 正确的KotlinByteArray构造方式
        let byteArray = KotlinByteArray(size: Int32(data.count))
        for (index, byte) in data.enumerated() {
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
