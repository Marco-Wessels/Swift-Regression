//
//  Parser.swift
//  Swift Regression
//
//  Created by Marco Wessels on 08/12/2025.
//

import CSV
import SwiftUI

let stream = InputStream(fileAtPath: "/Data/world_happiness")
let loaded = Bool(false)
struct Country: Identifiable{
    var name: String
    var HapScore: Double
    //var region: String
    var id = UUID()
}

func ParseToCountry() -> [Country] {
    let csv = try! CSVReader(stream: stream)
    while let row = csv.next() {
        print("\(row)")
    }
}

var data: [Country] = [
    while(!loaded){
        let tempC = Country(ParseToCountry())
        .init(tempC.name,tempC.HapScore)
    }
]


