#ifndef AOC_12_H
#define AOC_12_H

#include <vector>
#include <numeric>
#include <string>
#include <iostream>
#include <unordered_set>
#include "Moon.h"

namespace AoC_12 {
    std::string GetAllMoonsPositions(std::vector<Moon> moons) {
        std::string allPositions = "";
        for (int m = 0; m < moons.size(); m++) {
            allPositions += moons[m].GetPosition();
        }
        return allPositions;
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

    int B(std::vector<std::vector<int>> startingMoons) {
        std::vector<Moon> moons = {};
        for (auto& moon : startingMoons) {
            moons.push_back(Moon(moon[0], moon[1], moon[2]));
        }

        std::unordered_set<std::string> previousPositions = {};
        int i = 0;
        while (previousPositions.count(GetAllMoonsPositions(moons)) == 0) {
            previousPositions.insert(GetAllMoonsPositions(moons));
            for (int m = 0; m < moons.size(); m++) {
                for (int om = m + 1; om < moons.size(); om++) {
                    moons[m].UpdateVel(moons[om]);
                }
            }
            for (int m = 0; m < moons.size(); m++) {
                moons[m].Move();
            }
            i++;
            if (i % 100000 == 0) { std::cout << i << "\n"; }
        }
        std::cout << "done" << i;
        return i;
    }
}

#endif