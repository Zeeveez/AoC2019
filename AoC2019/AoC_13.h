#ifndef AOC_13_H
#define AOC_13_H

#include <map>
#include <algorithm>
#include <string>

#include "IntCodeCPU.h"

namespace AoC_13 {
    int A(std::vector<long long> program) {
        IntCodeCPU computer(program);
        std::map<std::pair<int, int>, int> tiles = {};
        while (!computer.halted) {
            computer.RunToOutput();
            int x = computer.Output();
            computer.RunToOutput();
            int y = computer.Output();
            computer.RunToOutput();
            int tile = computer.Output();
            tiles[std::pair<int, int>(x, y)] = tile;
        }
        return std::accumulate(tiles.begin(), tiles.end(), 0, [](int acc, std::pair<std::pair<int, int>, int> tile) {return acc + (tile.second == 2 ? 1 : 0); });
    }

    long long B(std::vector<long long> program) {
        IntCodeCPU computer(program);
        computer.memory[0] = 2; // Set F2P
        std::map<std::pair<int, int>, int> tiles = {};
        std::vector<int> outputs = { 0,0,0 };
        int currentOutput = 0;
        while (!computer.halted) {
            computer.RunToIO();
            if (computer.outputReady) {
                outputs[currentOutput++] = computer.Output();
                currentOutput %= 3;
                if (currentOutput == 0) {
                    if (outputs[0] == -1 && outputs[1] == 0) {
                        std::cout << "Score: " << outputs[2] << "\n";
                    }
                    else {
                        tiles[std::pair<int, int>(outputs[0], outputs[1])] = outputs[2];
                    }
                }
            }
            else if (computer.awaitingInput) {
                computer.Input(0);
            }
        }
        return -1;
    }
}

#endif