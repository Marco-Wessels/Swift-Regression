//
//  AlgoHeader.h
//  Swift Regression
//
//  Created by Marco Wessels on 11/12/2025.
//

#ifndef ALGOHEADER_H
#define ALGOHEADER_H

#include <string>
#include <vector>

double Test();

struct Dataset {
    std::vector<std::string> headers;
    std::vector<std::vector<double>> data;
};

class CSVLoader {
public:
    Dataset load(const std::string& filename);
    
private:
    std::vector<std::string> splitHeader(const std::string& line);
    std::vector<double> parseRow(const std::string& line, size_t cols);
};

#endif // !ALGOHEADER_H
