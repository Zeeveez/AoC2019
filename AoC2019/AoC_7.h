#ifndef AOC_7_H
#define AOC_7_H

#include <vector>
#include <algorithm>

#include "IntCodeCPU.h"

namespace AoC_7 {
    long long A(std::vector<long long> program) {
        long long thrust = 0;
        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 5; b++) {
                if (a == b) { continue; }
                for (int c = 0; c < 5; c++) {
                    if (a == c) { continue; }
                    if (b == c) { continue; }
                    for (int d = 0; d < 5; d++) {
                        if (a == d) { continue; }
                        if (b == d) { continue; }
                        if (c == d) { continue; }
                        for (int e = 0; e < 5; e++) {
                            if (a == e) { continue; }
                            if (b == e) { continue; }
                            if (c == e) { continue; }
                            if (d == e) { continue; }
                            IntCodeCPU computer1(program);
                            IntCodeCPU computer2(program);
                            IntCodeCPU computer3(program);
                            IntCodeCPU computer4(program);
                            IntCodeCPU computer5(program);
                            computer1.Input(a);
                            computer2.Input(b);
                            computer3.Input(c);
                            computer4.Input(d);
                            computer5.Input(e);
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
                        }
                    }
                }
            }
        }
        return thrust;
    }

    long long B(std::vector<long long> program) {
        long long thrust = 0;
        for (int a = 5; a < 10; a++) {
            for (int b = 5; b < 10; b++) {
                if (a == b) { continue; }
                for (int c = 5; c < 10; c++) {
                    if (a == c) { continue; }
                    if (b == c) { continue; }
                    for (int d = 5; d < 10; d++) {
                        if (a == d) { continue; }
                        if (b == d) { continue; }
                        if (c == d) { continue; }
                        for (int e = 5; e < 10; e++) {
                            if (a == e) { continue; }
                            if (b == e) { continue; }
                            if (c == e) { continue; }
                            if (d == e) { continue; }
                            IntCodeCPU computer1(program);
                            IntCodeCPU computer2(program);
                            IntCodeCPU computer3(program);
                            IntCodeCPU computer4(program);
                            IntCodeCPU computer5(program);
                            computer1.Input(a);
                            computer2.Input(b);
                            computer3.Input(c);
                            computer4.Input(d);
                            computer5.Input(e);
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
                        }
                    }
                }
            }
        }
        return thrust;
    }
}

#endif