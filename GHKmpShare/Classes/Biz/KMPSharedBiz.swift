//
//  KMPSharedBiz.swift
//  TestEncry
//
//  Created by sy on 2024/8/5.
//

import Foundation
import Shared
import HandyJSON

@objcMembers
/** KMP业务中间层
 * 只接受dict类型传入
 * 结构中包含关键字段就可以
 */
public class KMPSharedBiz: NSObject {

    public private(set) static var shared = KMPSharedBiz()
    
    private var currentScene: (dto: KmpBizDto, device: KmpDeviceDto)? = nil
    
    private var currentKmpProtocol: IKmpProtocol? = nil
    
    /// 当前KMP功能是否支持此SKU的此场景 -
    public func isSupportSceneBiz(param: [String: Any]?, device: [String: Any]?) -> Bool {
        if let dto = KmpBizDto.deserialize(from: param), let dv = KmpDeviceDto.deserialize(from: device) {
            // 判断静态场景不走KMP
            if dto.base64.isEmpty && dto.configType == 0 {
                return false
            }
            let bytes = Data(base64String: dto.base64) ?? Data()
            var extString = ""
            if let dict = dv.deviceExt, let jsonData = try?JSONSerialization.data(withJSONObject: dict, options: []) {
                extString = String(data: jsonData, encoding: .utf8) ?? ""
            }
            let deviceInfo = KmpDeviceInfo(sku: dv.sku, name: dv.deviceName, device: dv.deviceID, goodsType: Int32(dv.goodsType), softVersion: dv.versionSoft, hardVersion: dv.versionHard, pactType: Int32(dv.pactType), pactCode: Int32(dv.pactCode), ext: extString)

            if let pt = KmpProtocolHelper.shared.parse(sceneType: Int32(dto.configType), effectBytes: bytes.toKotlinByteArray(), info: deviceInfo) {
                self.currentKmpProtocol = pt
                self.currentScene = (dto, dv)
                return true
            } else {
                return false
            }
        } else {
            return false
        }
    }
    /// 获取当前场景的效果Data
    public func getCurrentBytes(param: [String: Any]?, device: [String: Any]?) -> String? {
        var res: String? = nil
        if self.isSupportSceneBiz(param: param, device: device) {
            res = _getCurrentBytes()
        }
        return res
    }
    
    private func _getCurrentBytes() -> String? {
        var res: String? = nil
        if let pt = self.currentKmpProtocol, let datas = pt.bytes() {
            let trans = datas.toData()
            res = trans.base64EncodedString()
        }
        return res
    }
    /// 调整颜色组
    public func changeColor(h: Float, param: [String: Any]?, device: [String: Any]?) -> String? {
        var res: String? = nil
        if self.isSupportSceneBiz(param: param, device: device), let pt = self.currentKmpProtocol {
            pt.updateColor(h: h)
            res = _getCurrentBytes()
        }
        return res
    }
    /// 重置/恢复颜色组
    public func resetColor(param: [String: Any]?, device: [String: Any]?) -> String? {
        var res: String? = nil
        if self.isSupportSceneBiz(param: param, device: device), let pt = self.currentKmpProtocol {
            pt.resetColor()
            res = _getCurrentBytes()
        }
        return res
    }
    
    /// 变更speedInfo json字符串
    public func changeSpeedInfoJSON(speedInfoStr: String, speedIndex: Int) -> String? {
        var res: String? = nil
        if let spdJson = KmpProtocolHelper.shared.changeSceneSpeedIndex(speedInfoStr: res, speedIndex: Int32(speedIndex)) {
            res = spdJson
        }
        return res
    }
    
    /// 调整方向 (注意：方向的code值，如果config不为null，则此值表示下标)
    public func changeDirection(code: Int = 0, param: [String: Any]?, device: [String: Any]?) -> String? {
        var res: String? = nil
        if self.isSupportSceneBiz(param: param, device: device), let pt = self.currentKmpProtocol, let bizParam = self.currentScene?.dto {
//            let speedConfig = bizParam.speedModel?["config"] as? String ?? ""
            pt.updateDirection(directionOrIndex: KotlinInt(int: Int32(code)), config: "")
            res = _getCurrentBytes()
        }
        return res
    }
    
    /// 调整速度（注意：档位时传index！！！，非档位传值code)
    public func changeSpeed(value: Int = 0, param: [String: Any]?, device: [String: Any]?) -> String? {
        var res: String? = nil
        if self.isSupportSceneBiz(param: param, device: device), let pt = self.currentKmpProtocol, let bizParam = self.currentScene?.dto {
            let speedConfig = bizParam.speedModel?["config"] as? String ?? ""
            pt.updateSpeed(speedOrIndex: KotlinInt(int: Int32(value)), config: speedConfig)
            res = _getCurrentBytes()
        }
        return res
    }
    /**
     * 获取色调颜色组
     */
    public func toneColorInfo(param: [String: Any]?, device: [String: Any]?) -> [KmpToneColorsVo]? {
        if self.isSupportSceneBiz(param: param, device: device), let pt = self.currentKmpProtocol {
            let info: KmpToneColorListInfo = pt.getToneColors()
//            print("log.pp ===== \(info.baseColorH)")
//            print("log.pp ===== \(info.baseColor)")
//            for ton in info.list {
//                print("log.pp item ===== base: \(ton.h) list: \(ton.toneColorList)")
//            }
            let cls = info.list.compactMap { KmpToneColorsVo(h: Int(Float($0.h)), colors: $0.toneColorList.map { $0.toSwiftInt()})}
            cls.forEach {
                if let baseColor = info.baseColor {
                    $0.baseColor = Int(truncating: baseColor)
                }
                if let bH = info.baseColorH {
                    $0.baseH = bH.intValue
                }
            }
            return cls
        }
        return nil
    }
    /*
     全参数变更
     */
    public func changeAll(speedVal: Int? = nil, directionVal: Int? = nil, colorH: Int? = nil, param: [String: Any]?, device: [String: Any]?) -> String? {
        if self.isSupportSceneBiz(param: param, device: device), let pt = self.currentKmpProtocol {
            if let spd = speedVal, let bizParam = self.currentScene?.dto {
                let speedConfig = bizParam.speedModel?["config"] as? String ?? ""
                pt.updateSpeed(speedOrIndex: KotlinInt(int: Int32(spd)), config: speedConfig)
            }
            if let dir = directionVal, let bizParam = self.currentScene?.dto {
//                let speedConfig = bizParam.speedModel?["config"] as? String ?? ""
                pt.updateDirection(directionOrIndex: KotlinInt(int: Int32(dir)), config: "")
            }
            if let h = colorH {
                pt.updateColor(h: Float(h))
            }
            return _getCurrentBytes()
        } else {
            return nil
        }
    }
    
    /**
     * 获取场景速度、方向信息
     */
    public func getSceneConfig(param: [String: Any]?, device: [String: Any]?) -> KmpConfigVo? {
        if self.isSupportSceneBiz(param: param, device: device), let dv = KmpDeviceDto.deserialize(from: device), let bizParam = self.currentScene?.dto {
            let speedConfig = bizParam.speedModel?["config"] as? String ?? ""
            var extString = ""
            
            if let dict = dv.deviceExt, let jsonData = try?JSONSerialization.data(withJSONObject: dict, options: []) {
                extString = String(data: jsonData, encoding: .utf8) ?? ""
            }
            
            let deviceInfo = KmpDeviceInfo(sku: dv.sku, name: dv.deviceName, device: dv.deviceID, goodsType: Int32(dv.goodsType), softVersion: dv.versionSoft, hardVersion: dv.versionHard, pactType: Int32(dv.pactType), pactCode: Int32(dv.pactCode), ext: extString)
            
            let cls = KmpProtocolHelper.shared.getSceneConfigInfo(config: speedConfig, info: deviceInfo)
            var speedVo: KmpSpeedVo? = nil
            var directionVo: KmpDirectionVo? = nil
            
            // 转换speedInfo
            if let speedInfo = cls?.speedInfo {
                let speedRange = speedInfo.speedRange?.toSwiftIntArray()
                speedVo = KmpSpeedVo(speedType: Int(speedInfo.speedType),
                               defSpeed: Int(speedInfo.defSpeed),
                               speedRange: speedRange,
                               speedGearCount: Int(speedInfo.speedGearCount))
            }
            
            // 转换directionInfo
            if let directionInfo = cls?.directionInfo {
                let supportDirections = directionInfo.supportDirections?.toSwiftIntArray()
                directionVo = KmpDirectionVo(defIndex: Int(directionInfo.defIndex),
                                           supportDirections: supportDirections)
            }
            
            let configVo = KmpConfigVo()
            configVo.speedInfo = speedVo
            configVo.directionInfo = directionVo
//            if let directionIdx = bizParam.speedInfo?["directionIndex"] as? Int {
//                configVo.directionInfo?.selIndex = directionIdx
//            }
            return configVo
        }
        return nil
    }
    
}

