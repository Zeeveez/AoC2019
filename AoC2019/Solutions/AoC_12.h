#ifndef AOC_12_H
#define AOC_12_H

#include <vector>
#include <numeric>
#include <string>
#include <iostream>
#include <unordered_set>

#include "../Classes/Moon/Moon.h"

namespace AoC_12 {
    long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    long long lcm(long long a, long long b) {
        return std::abs(a * b) / gcd(a, b);
    }

    int A(std::vector<std::vector<int>> startingMoons) {
        std::vector<Moon> moons = {};
        for (auto& moon : startingMoons) {
            moons.push_back(Moon(moon[0], moon[1], moon[2]));
        }

        for (int i = 0; i < 1000; i++) {
            for (int m = 0; m < moons.size(); m++) {
                for (int om = m + 1; om < moons.size(); om++) {
                    moons[m].UpdateVel(moons[om]);
                }
            }
            for (int m = 0; m < moons.size(); m++) {
                moons[m].Move();
            }
        }

        return std::accumulate(moons.begin(), moons.end(), 0, [](int acc, Moon moon) {return acc + moon.GetEnergy(); });
    }

    long long B(std::vector<std::vector<int>> startingMoons) {
        std::vector<Moon> moons = {};
        for (auto& moon : startingMoons) {
            moons.push_back(Moon(moon[0], moon[1], moon[2]));
        }

        long long ticks = 0;
        std::vector<long long> periods = { -1,-1,-1 };
        do {
            ticks++;
            for (int m = 0; m < moons.size(); m++) {
                for (int om = m + 1; om < moons.size(); om++) {
                    moons[m].UpdateVel(moons[om]);
                }
            }
            for (int m = 0; m < moons.size(); m++) {
                moons[m].Move();
            }
            for (int i = 0; i < 3; i++) {
                if (periods[i] == -1) {
                    if (moons[0].AtStart(i) && moons[1].AtStart(i) && moons[2].AtStart(i) && moons[3].AtStart(i)) {
                        periods[i] = ticks;
                    }
                }
            }
        } while (periods[0] == -1 || periods[1] == -1 || periods[2] == -1);
        return lcm(periods[0], lcm(periods[1], periods[2]));
    }
}

#endif