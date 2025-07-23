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
    
    private var tableView: UITableView!
    private var toneColorsData: [[Int]] = []
    
    private var base1View: UIView?
    private var base2View: UIView?

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let param: [String: Any] = [
            "config": "",
            "base64": "UGsBFv/Tb2QAAALJAAG+AIlQTkcNChoKAAAADUlIRFIAAAAVAAAACwgCAAAAH6lRKgAAAIVJREFUKBXVT1sOgDAIg8Rr6uHmQSe0C8ON+O/iB5S+FPnB63hlUS3RDJo2VtWVf9h5RymgUu+Qy0CSy2Hn3WJVXrBoQi/yB0ea1+unsEWtnA1Emi/ORy/7nx6QHWZbZmZlzLDwzTmej8+GmIm4dQUSBwf5Yfw9vGJBdaRMyEVIyAjbAXkAuIFk3+CwiwQAAAAASUVORK5CYIIEWWQB7gcAAJUAAYoAiVBORw0KGgoAAAANSUhEUgAAABUAAAALCAIAAAAfqVEqAAAAUUlEQVQoFWNgIAT+zxMgpAQmP8dWEcYkTP+vBalhhCuEa045fB8uSBoDbgQubf8dg9CkEPajSWBy4ZoZ969DyOIJnv8a6MEBNwKhf5RFUQgAAIYmETmaKU5tAAAAAElFTkSuQmCCCzJkAvQBAAAA",
            "configType": 5,
            "sceneCode": 20008,
            "speedInfo": ["config": ""]
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
        
        setupTableView()
        loadData(param: param, device: device)
    }
    
    private func setupTableView() {
        tableView = UITableView(frame: view.bounds, style: .plain)
        tableView.delegate = self
        tableView.dataSource = self
        tableView.rowHeight = 50
        tableView.register(ColorTableViewCell.self, forCellReuseIdentifier: "ColorCell")
        
        // 创建 headerView
        let headerView = UIView(frame: CGRect(x: 0, y: 0, width: view.bounds.width, height: 50))
        headerView.backgroundColor = UIColor.lightGray
        
        // 在 headerView 中添加两个 20x20 的 UIView
        let firstView = UIView(frame: CGRect(x: 25, y: 15, width: 20, height: 20))
//        firstView.backgroundColor = UIColor.red
        headerView.addSubview(firstView)
        
        let secondView = UIView(frame: CGRect(x: 70, y: 15, width: 20, height: 20)) // 25 + 20 + 25 = 70
//        secondView.backgroundColor = UIColor.blue
        headerView.addSubview(secondView)

        self.base1View = firstView
        self.base2View = secondView
        
        tableView.tableHeaderView = headerView
        view.addSubview(tableView)
    }
    
    private func loadData(param: [String: Any], device: [String: Any]) {
        if let r = KMPSharedBiz.shared.toneColorInfo(param: param, device: device) {
            print("log.pp =============== 转换后 ==================")
            for ton in r {
//                print("log.pp ===== \(ton.baseColor)")
                print("log.pp item ===== base: \(ton.h) list: \(ton.colors)")
            }
            
            var da: [[Int]] = []
            for (_, vo) in r.enumerated() {
                let arr: [Int] = vo.colors
                da.append(arr)
            }
            self.toneColorsData = da
            tableView.reloadData()
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

// MARK: - UITableViewDataSource
extension ViewController: UITableViewDataSource {
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return toneColorsData.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "ColorCell", for: indexPath) as! ColorTableViewCell
        let toneColorVo = toneColorsData[indexPath.row]
        cell.configure(with: toneColorVo)
        return cell
    }
}

// MARK: - UITableViewDelegate
extension ViewController: UITableViewDelegate {
    // 可以在这里添加点击事件等
}

// MARK: - Custom Cell
class ColorTableViewCell: UITableViewCell {
    
    private var colorViews: [UIView] = []
    
    override init(style: UITableViewCell.CellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        setupColorViews()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func setupColorViews() {
        // 创建5个 20x20 的 UIView，间距25
        for i in 0..<5 {
            let colorView = UIView()
            colorView.frame = CGRect(x: 25 + i * 45, y: 15, width: 20, height: 20) // 25 + i * (20 + 25)
//            colorView.backgroundColor = UIColor.gray
            colorViews.append(colorView)
            contentView.addSubview(colorView)
        }
    }
    
    func configure(with toneColorVo: [Int]) {
        // 根据 toneColorVo.colors 数组设置颜色
        for (index, colorView) in colorViews.enumerated() {
            if index < toneColorVo.count {
                let colorInt = toneColorVo[index]
                
                let color = UIColor.fromBGR(colorInt)
                color.printHexValue()
                colorView.backgroundColor = color
                
//                if let color = UIColor(hex: colorInt) {
//                    color.printHexValue()
//                    colorView.backgroundColor = color
//                }
            }
        }
    }
}

// MARK: - UIColor Extension
extension UIColor {
    
    /// 从 ARGB Int 值创建颜色（Android格式）
    static func fromARGB(_ argb: Int) -> UIColor {
        let alpha = CGFloat((argb >> 24) & 0xFF) / 255.0
        let red = CGFloat((argb >> 16) & 0xFF) / 255.0
        let green = CGFloat((argb >> 8) & 0xFF) / 255.0
        let blue = CGFloat(argb & 0xFF) / 255.0
        return UIColor(red: red, green: green, blue: blue, alpha: alpha)
    }
    
    /// 从 ABGR Int 值创建颜色（另一种可能的格式）
    static func fromABGR(_ abgr: Int) -> UIColor {
        let alpha = CGFloat((abgr >> 24) & 0xFF) / 255.0
        let blue = CGFloat((abgr >> 16) & 0xFF) / 255.0
        let green = CGFloat((abgr >> 8) & 0xFF) / 255.0
        let red = CGFloat(abgr & 0xFF) / 255.0
        return UIColor(red: red, green: green, blue: blue, alpha: alpha)
    }
    
    /// 从 BGR Int 值创建颜色
    static func fromBGR(_ bgr: Int) -> UIColor {
        let blue = CGFloat((bgr >> 16) & 0xFF) / 255.0
        let green = CGFloat((bgr >> 8) & 0xFF) / 255.0
        let red = CGFloat(bgr & 0xFF) / 255.0
        return UIColor(red: red, green: green, blue: blue, alpha: 1.0)
    }
    
    convenience init?(red: Int, green: Int, blue: Int, transparency: CGFloat = 1) {
        guard red >= 0 && red <= 255 else { return nil }
        guard green >= 0 && green <= 255 else { return nil }
        guard blue >= 0 && blue <= 255 else { return nil }

        var trans = transparency
        if trans < 0 { trans = 0 }
        if trans > 1 { trans = 1 }

        self.init(red: CGFloat(red) / 255.0, green: CGFloat(green) / 255.0, blue: CGFloat(blue) / 255.0, alpha: trans)
    }
    
    convenience init?(hex: Int, transparency: CGFloat = 1) {
        var trans = transparency
        if trans < 0 { trans = 0 }
        if trans > 1 { trans = 1 }

        let red = (hex >> 16) & 0xff
        let green = (hex >> 8) & 0xff
        let blue = hex & 0xff
        self.init(red: red, green: green, blue: blue, transparency: trans)
    }
    /// 获取UIColor的hex字符串值
    var hexString: String {
        var red: CGFloat = 0
        var green: CGFloat = 0
        var blue: CGFloat = 0
        var alpha: CGFloat = 0
        
        getRed(&red, green: &green, blue: &blue, alpha: &alpha)
        
        let rgb = Int(red * 255) << 16 | Int(green * 255) << 8 | Int(blue * 255)
        return String(format: "#%06X", rgb)
    }
    
    /// 打印UIColor的hex值
    func printHexValue() {
        print("UIColor hex value: \(self.hexString)")
    }
}

