#ifndef AOC_7_H
#define AOC_7_H

#include <vector>
#include <algorithm>

#include "IntCodeCPU.h"

namespace AoC_7 {
    long long A(std::vector<long long> program) {
        std::vector<long long> permutations = { 0,1,2,3,4 };
        long long thrust = 0;
        do {
            std::vector<IntCodeCPU> cpus = {};
            for (int i = 0; i < 5; i++) {
                cpus.push_back(IntCodeCPU(program));
                cpus[i].Input(permutations[i]);
                cpus[i].RunToInput();
                cpus[i].Input(i == 0 ? 0 : cpus[i - 1].Output());
                cpus[i].RunToOutput();
            }
            thrust = std::max(thrust, cpus[4].Output());
        } while (std::next_permutation(permutations.begin(), permutations.end()));
        return thrust;
    }

    long long B(std::vector<long long> program) {
        std::vector<long long> permutations = { 5,6,7,8,9 };
        long long thrust = 0;
        do {
            std::vector<IntCodeCPU> cpus = {};
            for (int i = 0; i < 5; i++) {
                cpus.push_back(IntCodeCPU(program));
                cpus[i].Input(permutations[i]);
            }
            long long comp1input = 0;
            while (!cpus[4].halted) {
                for (int i = 0; i < 5; i++) {
                    cpus[i].RunToInput();
                    cpus[i].Input(i == 0 ? comp1input : cpus[i-1].Output());
                    cpus[i].RunToOutput();
                }
                comp1input = cpus[4].Output();
            }
            thrust = std::max(thrust, comp1input);
        } while (std::next_permutation(permutations.begin(), permutations.end()));
        return thrust;
    }
}

#endif