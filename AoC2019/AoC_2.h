#ifndef AOC_2_H
#define AOC_2_H

#include <vector>

#include "IntCodeCPU.h"

namespace AoC_2 {
    int A(std::vector<int> program, int noun, int verb) {
        IntCodeCPU computer(program);
        computer.memory[1] = noun;
        computer.memory[2] = verb;
        computer.RunToEnd();
        return computer.memory[0];
    }

    int B(std::vector<int> program, int solution) {
        IntCodeCPU computer(program);
        for (int noun = 0; noun < 100; noun++) {
            for (int verb = 0; verb < 100; verb++) {
                if (A(program, noun, verb) == solution) {
                    return 100 * noun + verb;
                }
            }
        }
        return -1;
    }
}

#endif