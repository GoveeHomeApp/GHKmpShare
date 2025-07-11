//
//  KMPSharedModel.swift
//  C
//
//  Created by sy on 2025/7/10.
//

import Foundation
import HandyJSON
import Shared

@objcMembers
public class KmpToneColorsVo:NSObject, HandyJSON {
    var h: Float = 0.0
    var colors: [Int] = []
    public required override init() { }
    public convenience init(h: Float, colors: [Int]) {
        self.init()
        self.h = h
        self.colors = colors
    }
}

@objcMembers
public class KmpConfigVo:NSObject, HandyJSON {
    var speedInfo: KmpSpeedVo?
    var directionInfo: KmpDirectionVo?
    public required override init() { }
}

@objcMembers
public class KmpSpeedVo:NSObject, HandyJSON {
    var speedType: Int = 0
    var defSpeed: Int = 0
    var speedRange: [Int]? = nil
    var speedGearCount: Int = 0
    
    public required override init() { }
    
    convenience init(speedType: Int, defSpeed: Int, speedRange: [Int]?, speedGearCount: Int) {
        self.init()
        self.speedType = speedType
        self.defSpeed = defSpeed
        self.speedRange = speedRange
        self.speedGearCount = speedGearCount
    }
}

@objcMembers
public class KmpDirectionVo:NSObject, HandyJSON {
    var defIndex: Int = 0
    var supportDirections: [Int]? = nil
    
    public required override init() { }
    
    convenience init(defIndex: Int, supportDirections: [Int]?) {
        self.init()
        self.defIndex = defIndex
        self.supportDirections = supportDirections
    }
}



@objcMembers
public class KmpBizDto: NSObject, HandyJSON {
    
    public var base64String: String = ""
    public var scenesType: Int = -1
    public var speedInfo: [String: Any]?
    
    public required override init() { }
}

@objcMembers
public class KmpDeviceDto: NSObject, HandyJSON {
    
    public var sku = ""
    public var deviceID: String = ""
    public var goodsType = 0
    public var pactType = 0
    public var pactCode = 0
    public var versionHard = ""
    public var versionSoft = ""
    public var wifiHardVersion = ""
    public var wifiSoftVersion = ""
    public var deviceName: String = ""
    public var deviceExt: [String : Any]?
    
    public required override init() { }
}

extension Data {
    
    init?(base64String: String) {
        var string = base64String.replacingOccurrences(of: "\\", with: "")
        let sub = string.count % 4
        switch sub {
        case 1, 2:
            string = string.appending("==")
        case 3:
            string = string.appending("=")
        default:
            break
        }
        self.init(base64Encoded: string, options: .ignoreUnknownCharacters)
    }
    
    func toKotlinByteArray() -> KotlinByteArray {
        let kotlinByteArray = KotlinByteArray(size: Int32(self.count))
        self.withUnsafeBytes { (rawBufferPointer: UnsafeRawBufferPointer) in
            let bufferPointer = rawBufferPointer.bindMemory(to: UInt8.self)
            for (index, byte) in bufferPointer.enumerated() {
                kotlinByteArray.set(index: Int32(index), value: Int8(truncating: KotlinByte(value: Int8(bitPattern: byte))))
            }
        }
        return kotlinByteArray
    }
}

// Data 转 [SharedByte]
extension Data {
    func toSharedByteArray() -> [KotlinByte] {
        return self.map { KotlinByte(value: Int8(bitPattern: $0)) }
    }
}

// [SharedByte] 转 Data
extension Array where Element == KotlinByte {
    func toData() -> Data {
        let bytes = self.map { UInt8(bitPattern: $0.int8Value) }
        return Data(bytes)
    }
}

extension KotlinInt {
    /// 转换为 Swift Int
    func toSwiftInt() -> Int {
        return self.intValue
    }
    
    /// 从 Swift Int 创建 KotlinInt
    convenience init(swiftInt: Int) {
        self.init(int: Int32(swiftInt))
    }
}

extension Int {
    /// 转换为 KotlinInt
    func toKotlinInt() -> KotlinInt {
        return KotlinInt(int: Int32(self))
    }
}

extension KotlinIntArray {
    func toSwiftIntArray() -> [Int] {
        var result: [Int] = []
        for i in 0..<self.size {
            result.append(Int(self.get(index: i)))
        }
        return result
    }
}
