#ifndef AOC_2_H
#define AOC_2_H

#include <vector>

#include "../Classes/IntCodeCPU/IntCodeCPU.h"

namespace AoC_2 {
    long long A(std::vector<long long> program, long long noun, long long verb) {
        IntCodeCPU computer(program);
        computer.memory[1] = noun;
        computer.memory[2] = verb;
        computer.RunToEnd();
        return computer.memory[0];
    }

    long long B(std::vector<long long> program, long long solution) {
        IntCodeCPU computer(program);
        for (long long noun = 0; noun < 100; noun++) {
            for (long long verb = 0; verb < 100; verb++) {
                if (A(program, noun, verb) == solution) {
                    return 100 * noun + verb;
                }
            }
        }
        return -1;
    }
}

#endif