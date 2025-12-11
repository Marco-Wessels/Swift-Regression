//
//  AlgoHelper.cpp
//  Swift Regression
//
//  Created by Marco Wessels on 11/12/2025.
//
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>
#include "AlgoHeader.h"

Dataset CSVLoader::load(const std::string& filename) {
    Dataset d;
    std::ifstream file(filename);
    std::string line;

    bool first = true;

    while (std::getline(file, line)) {
        if (first) {
            d.headers = splitHeader(line);
            first = false;
            d.data.reserve(20000);
        } else {
            d.data.push_back(parseRow(line, d.headers.size()));
        }
    }

    return d;
}

std::vector<std::string> CSVLoader::splitHeader(const std::string& line) {
    std::vector<std::string> out;
    out.reserve(32);

    size_t start = 0;
    size_t pos;

    while ((pos = line.find(',', start)) != std::string::npos) {
        out.emplace_back(line.substr(start, pos - start));
        start = pos + 1;
    }

    out.emplace_back(line.substr(start));
    return out;
}

std::vector<double> CSVLoader::parseRow(const std::string& line, size_t cols) {
    std::vector<double> row;
    row.reserve(cols);

    const char* cstr = line.c_str();
    char* end;

    while (*cstr) {
        double v = strtod(cstr, &end);
        row.push_back(v);

        if (*end == ',')
            cstr = end + 1;
        else
            break;
    }

    return row;
}
