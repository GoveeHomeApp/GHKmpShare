//
//  KMPSharedBiz.swift
//  TestEncry
//
//  Created by sy on 2024/8/5.
//

import GHConnector
import Shared

class KMPShareModule: GHModular {
    
    func registerStore(store: GHModuleStore) {
        

    }
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        
        KmpImageConverterManager.shared.setProcessor(processor: IOSImageProcessorForKt())
        
        return true
    }
    
}
