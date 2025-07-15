//
//  ViewController.swift
//  GHKmpShare
//
//  Created by GoveeHomeApp on 07/10/2025.
//  Copyright (c) 2025 GoveeHomeApp. All rights reserved.
//

import UIKit
import GHKmpShare

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let param: [String: Any] = [
            "config": "{\"minSpeedValue\":50,\"overly\":[{\"speedValue\":70,\"layerFlag\":1,\"layerIndex\":0},{\"speedValue\":70,\"layerFlag\":2,\"layerIndex\":1}],\"maxSpeedValue\":100,\"currentSpeedValue\":70}",
            "base64": "UHsBFgAA/2QAAAKpAAGeAIlQTkcNChoKAAAADUlIRFIAAAAVAAAACwgCAAAAH6lRKgAAAGVJREFUKBXFUNEKACEI0/vv+/bV0sSjCOEeGmKara1E7kJXecytzWyOYn2isgKA9CjDNZwBWM9Wtaof5KxaIVPFOLSdUNMmge/H21PSKxknmRhkftkI2vg4sUPn7FfQxT/yWWY7bQ1IIuSGsRpIAAAAAElFTkSuQmCCBkYxAWQAAADFAAG6AIlQTkcNChoKAAAADUlIRFIAAAAVAAAACwgCAAAAH6lRKgAAAIFJREFUKBVjYKA6+F9L2Mj/nsmEFQFVLGX4T5Q6rIrQNAPdhek0pv/3seoF2RzNwAiX+78L7GDbZCgDJsHCqAhjItH/eRgYvyA0g2QOz2WwTQaRZAOQ+yGuABuB6RcGhv//QYgIgE0zUBtx+nFoxm0tMCzhcYHmPibcurDLMKIGKwCv9yz1dQNKkAAAAABJRU5ErkJgggdGZAL0AQAAAA==",
            "configType": 5,
            "sceneCode": 20067
        ]
        let device: [String: Any] = [
            "sku": "H6020",
            "device": "A0:67:C2:70:65:CF:47:82",
            "goodsType": 210,
            "pactType": 1,
            "pactCode": 1,
            "versionHard": "3.06.02",
            "versionSoft": "1.00.33",
            "deviceName": "sss"
        ]
//        let resp = KMPSharedBiz.shared.getSceneConfig(param: param, device: device)
//        
//        let re = KMPSharedBiz.shared.changeAll(speedVal: 50, directionVal: 1, colorH: 20, param: param, device: device)
        
        let r = KMPSharedBiz.shared.toneColorInfo(param: param, device: device)
        
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

