//
//  LinReg.cpp
//  Swift Regression
//
//  Created by Marco Wessels on 11/12/2025.
//
#include <vector>
#include <iostream>
#include "AlgoHeader.h"

double Test(){
    CSVLoader loader;
    Dataset ds = loader.load("world_happiness.csv");
    
    // Debug: Check if data was loaded
    std::cout << "Headers size: " << ds.headers.size() << std::endl;
    std::cout << "Data rows: " << ds.data.size() << std::endl;
    
    if (ds.data.empty()) {
        std::cout << "ERROR: No data loaded! Check file path." << std::endl;
        return -1.0;
    }
    
    if (ds.data[0].empty()) {
        std::cout << "ERROR: First row is empty!" << std::endl;
        return -1.0;
    }
    
    std::cout << "First value: " << ds.data[0][0] << std::endl;
    return ds.data[0][0];
}

class LinearRegression{
public:
    double Test(){
        CSVLoader loader;
        Dataset ds = loader.load("Data/world_happiness.csv");
        
        if (ds.data.empty() || ds.data[0].empty()) {
            return -1.0;
        }
        
        return ds.data[0][0];
    }
};

