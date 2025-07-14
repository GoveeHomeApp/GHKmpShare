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
/// 场景-颜色页面模型
public class KmpToneColorsVo:NSObject, HandyJSON {
    /// 底色h
    public var h: Int = 0
    /// 对应颜色组
    public var colors: [Int] = []
    public required override init() { }
    public convenience init(h: Int, colors: [Int]) {
        self.init()
        self.h = h
        self.colors = colors
    }
}

@objcMembers
/// 场景-速度与方向解析页面模型
public class KmpConfigVo:NSObject, HandyJSON {
    /// kmp速度信息
    public var speedInfo: KmpSpeedVo?
    /// kmp方向信息
    public var directionInfo: KmpDirectionVo?
    public required override init() { }
}

@objcMembers
public class KmpSpeedVo:NSObject, HandyJSON {
    /// 0：档位调节 1：无级变速
    public var speedType: Int = 0
    /// 默认速度 （调档时为 对应档位，无极调速对应具体值）
    public var defSpeed: Int = 0
    /// 无极调速速度范围
    var speedRange: [Int]? = nil
    /// 无极调速便捷获取速度范围
    public var speedRangeTuple: (low: Int, high: Int) {
        (speedRange?.first ?? 0, speedRange?.last ?? 100)
    }
    /// 档位调节-档位个数
    public var speedGearCount: Int = 0
    
    public required override init() { }
    
    public convenience init(speedType: Int, defSpeed: Int, speedRange: [Int]?, speedGearCount: Int) {
        self.init()
        self.speedType = speedType
        self.defSpeed = defSpeed
        self.speedRange = speedRange
        self.speedGearCount = speedGearCount
    }
}

@objcMembers
public class KmpDirectionVo:NSObject, HandyJSON {
    /// 默认方向idx
    public var defIndex: Int = -1
    /// 支持的所有的方向的code
    public var supportDirections: [Int]? = nil
    /// 注意当前默认的值有问题！！！
    public var selIndex: Int = -1
    public required override init() { }
    
    public convenience init(defIndex: Int, supportDirections: [Int]?) {
        self.init()
        self.defIndex = defIndex
        self.supportDirections = supportDirections
    }
}



@objcMembers
public class KmpBizDto: NSObject, HandyJSON {
    /// 效果字符串
    public var base64String: String = ""
    /// 场景code
    public var scenesType: Int = -1
    /// 速度/方向信息
    public var speedInfo: [String: Any]?
    /// 效果类型
    public var sceneType: Int = -1
    /// 场景code （另一种表现形式！！！）
    public var sceneCode: Int = -1
    
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
