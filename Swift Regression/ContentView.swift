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
            Text("First Value: \(TestWrapper())")
        }
        .padding()
    }
}

#Preview {
    ContentView()
}
