#ifndef AOC_9_H
#define AOC_9_H

#include <vector>

#include "../Classes/IntCodeCPU/IntCodeCPU.h"

namespace AoC_9 {
    long long AB(std::vector<long long> program, long long input) {
        IntCodeCPU computer(program);
        computer.Input(input);
        computer.RunToEnd();
        return computer.Output();
    }
}

#endif