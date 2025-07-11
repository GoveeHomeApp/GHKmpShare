//
//  IOSLogProcessorForKt.swift
//  GHKmpShare
//
//  Created by sy on 2025/7/11.
//

import Shared
import Foundation

class IOSLogProcessorForKt: KmpLogProcessor {
    
    func logInfo(tag: String, info: String) {
        // 或者使用NSLog
         NSLog("[KMP => INFO] %@: %@", tag, info)
    }
    
    func logDebug(tag: String, info: String) {
         NSLog("[KMP => DEBUG] %@: %@", tag, info)
    }
    
    func logWarn(tag: String, info: String) {
         NSLog("[KMP => WARN] %@: %@", tag, info)
    }
    
    func logError(tag: String, info: String) {
         NSLog("[KMP => ERROR] %@: %@", tag, info)
    }
}
