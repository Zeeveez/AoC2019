#ifndef AOC_17_H
#define AOC_17_H

#include <map>
#include <numeric>
#include <algorithm>

#include "Classes/IntCodeCPU/IntCodeCPU.h"

namespace AoC_17 {
    std::vector<std::vector<char>> GetMap(std::vector<long long> program) {
        IntCodeCPU computer(program);
        std::vector<std::vector<char>> scaffold = { {} };
        while (!computer.halted) {
            computer.RunToOutput();
            switch (computer.Output()) {
            case 35:    // #
                scaffold[scaffold.size() - 1].push_back('#');
                break;
            case 46:    // .
                scaffold[scaffold.size() - 1].push_back('.');
                break;
            case 10:    // \n
                scaffold.push_back({});
                break;
            case 60:    // <
                scaffold[scaffold.size() - 1].push_back('<');
                break;
            case 62:    // >
                scaffold[scaffold.size() - 1].push_back('>');
                break;
            case 94:    // ^
                scaffold[scaffold.size() - 1].push_back('^');
                break;
            case 118:   // v
                scaffold[scaffold.size() - 1].push_back('v');
                break;
            }
        }
        scaffold.erase(std::remove_if(scaffold.begin(), scaffold.end(), [](std::vector<char> vec) {return vec.size() == 0; }), scaffold.end());
        return scaffold;
    }

    int A(std::vector<long long> program) {
        std::vector<std::vector<char>> scaffold = GetMap(program);
        int alignmentSum = 0;
        for (int y = 0; y < scaffold.size(); y++) {
            for (int x = 0; x < scaffold[0].size(); x++) {
                if (scaffold[y][x] == '#' && y > 0 && x > 0 && y < scaffold.size() - 1 && x < scaffold[0].size() - 1) {
                    {
                        if (scaffold[y][x + 1] == '#' && scaffold[y][x - 1] == '#' && scaffold[y + 1][x] == '#' && scaffold[y - 1][x] == '#') {
                            alignmentSum += x * y;
                        }
                    }
                }
            }
        }
        return alignmentSum;
    }

    int B(std::vector<long long> program) {
        /*
        L,4,L,10,L,6,L,4,L,10,L,6,L,6,L,4,R,8,R,8,L,6,R,8,L,10,L,8,L,8,L,4,L,10,L,6,L,6,R,8,L,10,L,8,L,8,L,6,L,4,R,8,R,8,L,6,R,8,L,10,L,8,L,8,L,4,L,10,L,6,L,6,L,4,R,8,R,8

        A,A,B,C,A,C,B,C,A,B
        L,4,L,10,L,6
        L,6,L,4,R,8,R,8
        L,6,R,8,L,10,L,8,L,8
        */
        IntCodeCPU computer(program);
        computer.memory[0] = 2;
        for (const char& c : "A,A,B,C,A,C,B,C,A,B\nL,4,L,10,L,6\nL,6,L,4,R,8,R,8\nL,6,R,8,L,10,L,8,L,8\nn\n") {
            computer.RunToInput();
            computer.Input(c);
        }
        computer.RunToEnd();
        return computer.Output();
    }
}

#endif