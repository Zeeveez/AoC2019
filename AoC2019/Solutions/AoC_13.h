#ifndef AOC_13_H
#define AOC_13_H

#include <map>
#include <numeric>

#include "Classes/IntCodeCPU/IntCodeCPU.h"

namespace AoC_13 {
    long long A(std::vector<long long> program) {
        IntCodeCPU computer(program);
        std::map<std::pair<long long, long long>, long long> tiles = {};
        while (!computer.halted) {
            computer.RunToOutput();
            long long x = computer.Output();
            computer.RunToOutput();
            long long y = computer.Output();
            computer.RunToOutput();
            long long tile = computer.Output();
            tiles[std::pair<long long, long long>(x, y)] = tile;
        }
        return std::accumulate(tiles.begin(), tiles.end(), 0, [](long long acc, std::pair<std::pair<long long, long long>, long long> tile) {return acc + (tile.second == 2 ? 1 : 0); });
    }

    long long B(std::vector<long long> program) {
        IntCodeCPU computer(program);
        computer.memory[0] = 2; // Set F2P
        std::map<std::pair<long long, long long>, long long> tiles = {};
        std::vector<long long> outputs = { 0,0,0 };
        unsigned int currentOutput = 0;
        long long paddleX = 15;
        long long ballX = 15;
        long long score = 0;
        while (!computer.halted) {
            computer.RunToOutput();
            if (computer.outputReady) {
                outputs[currentOutput++] = computer.Output();
                currentOutput %= 3;
                if (currentOutput == 0) {
                    if (outputs[0] == -1 && outputs[1] == 0) {
                        score = outputs[2];
                    }
                    else {
                        tiles[std::pair<long long, long long>(outputs[0], outputs[1])] = outputs[2];
                        if (outputs[2] == 3) { paddleX = outputs[0]; }
                        if (outputs[2] == 4) { ballX = outputs[0]; }
                    }
                }
            }
            computer.Input(paddleX < ballX ? 1 : paddleX > ballX ? -1 : 0);
        }
        return score;
    }
}

#endif