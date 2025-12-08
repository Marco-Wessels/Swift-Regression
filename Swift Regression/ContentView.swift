//
//  ContentView.swift
//  Swift Regression
//
//  Created by Marco Wessels on 08/12/2025.
//

import SwiftUI
import Charts

struct ContentView: View {
    var body: some View {
        VStack {
            Image(systemName: "chart.bar")
                .imageScale(.large)
                .foregroundStyle(.tint)
            Text("Graph")
            Chart {
                ForEach(data){ Country in
                    BarMark(
                        x: .value("Name", Country.name),
                        y: .value("Happiness", Country.HapScore)
                        )
                }
            }
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
