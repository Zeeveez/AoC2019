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
            IntCodeCPU computer1(program);
            IntCodeCPU computer2(program);
            IntCodeCPU computer3(program);
            IntCodeCPU computer4(program);
            IntCodeCPU computer5(program);
            computer1.Input(permutations[0]);
            computer2.Input(permutations[1]);
            computer3.Input(permutations[2]);
            computer4.Input(permutations[3]);
            computer5.Input(permutations[4]);
            computer1.RunToInput();
            computer1.Input(0);
            computer1.RunToOutput();
            computer2.RunToInput();
            computer2.Input(computer1.Output());
            computer2.RunToOutput();
            computer3.RunToInput();
            computer3.Input(computer2.Output());
            computer3.RunToOutput();
            computer4.RunToInput();
            computer4.Input(computer3.Output());
            computer4.RunToOutput();
            computer5.RunToInput();
            computer5.Input(computer4.Output());
            computer5.RunToOutput();
            thrust = std::max(thrust, computer5.Output());
        } while (std::next_permutation(permutations.begin(), permutations.end()));
        return thrust;
    }

    long long B(std::vector<long long> program) {
        std::vector<long long> permutations = { 5,6,7,8,9 };
        long long thrust = 0;
        do {
            IntCodeCPU computer1(program);
            IntCodeCPU computer2(program);
            IntCodeCPU computer3(program);
            IntCodeCPU computer4(program);
            IntCodeCPU computer5(program);
            computer1.Input(permutations[0]);
            computer2.Input(permutations[1]);
            computer3.Input(permutations[2]);
            computer4.Input(permutations[3]);
            computer5.Input(permutations[4]);
            long long comp1input = 0;
            while (!computer5.halted) {
                computer1.RunToInput();
                computer1.Input(comp1input);
                computer1.RunToOutput();
                computer2.RunToInput();
                computer2.Input(computer1.Output());
                computer2.RunToOutput();
                computer3.RunToInput();
                computer3.Input(computer2.Output());
                computer3.RunToOutput();
                computer4.RunToInput();
                computer4.Input(computer3.Output());
                computer4.RunToOutput();
                computer5.RunToInput();
                computer5.Input(computer4.Output());
                computer5.RunToOutput();
                comp1input = computer5.Output();
            }
            thrust = std::max(thrust, comp1input);
        } while (std::next_permutation(permutations.begin(), permutations.end()));
        return thrust;
    }
}

#endif