#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <iterator>

namespace Parser {
    std::string LoadSingleLine(int fileNo) {
        std::ifstream f("./Inputs/" + std::to_string(fileNo));
        std::string line;
        while (std::getline(f, line)) {
            return line;
        }
        throw "No line in file";
    }
    std::vector<std::string> LoadLines(int fileNo) {
        std::ifstream f("./Inputs/" + std::to_string(fileNo));
        std::string line;
        std::vector<std::string> output;
        while (std::getline(f, line)) {
            output.push_back(line);
        }
        return output;
    }
    std::vector<int> LoadIntLines(int fileNo) {
        std::ifstream f("./Inputs/" + std::to_string(fileNo));
        std::string line;
        std::vector<int> output;
        while (std::getline(f, line)) {
            output.push_back(std::stoi(line));
        }
        return output;
    }
    std::vector<long long> LoadCSV(int fileNo) {
        std::ifstream f("./Inputs/" + std::to_string(fileNo));
        std::string line;
        std::vector<long long> output;
        while (std::getline(f, line, ',')) {
            output.push_back(std::stoll(line));
        }
        return output;
    }
}

#endif