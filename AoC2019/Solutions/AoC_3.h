#ifndef AOC_3_H
#define AOC_3_H

#include <map>
#include <vector>
#include <algorithm>

namespace AoC_3 {
    void RunWire(std::map<std::pair<int, int>, std::map<int, int>>& grid, std::vector<std::pair<char, int>> wire, int wireNo) {
        std::pair<int, int> pos = { 0, 0 };
        int n = 0;
        for (auto& mov : wire) {
            for (int i = 0; i < mov.second; i++) {
                n++;
                switch (mov.first) {
                case 'U':
                    pos.second++;
                    break;
                case 'D':
                    pos.second--;
                    break;
                case 'L':
                    pos.first--;
                    break;
                case 'R':
                    pos.first++;
                    break;
                }
                if (grid.count(pos) == 0) {
                    grid[pos] = { { wireNo, n } };
                }
                else {
                    if (grid[pos].count(wireNo) == 0) {
                        grid[pos][wireNo] = n;
                    }
                }
            }
        }
    }

    int A(std::vector<std::pair<char, int>> wire1, std::vector<std::pair<char, int>> wire2) {
        std::map<std::pair<int, int>, std::map<int, int>> grid = {};
        RunWire(grid, wire1, 1);
        RunWire(grid, wire2, 2);

        int ret = 9999999;
        for (auto& keyVal : grid) {
            if (keyVal.second.count(1) == 1 && keyVal.second.count(2) == 1) {
                ret = std::min(ret, std::abs(keyVal.first.first) + std::abs(keyVal.first.second));
            }
        }
        return ret;
    }

    int B(std::vector<std::pair<char, int>> wire1, std::vector<std::pair<char, int>> wire2) {
        std::map<std::pair<int, int>, std::map<int, int>> grid = {};
        RunWire(grid, wire1, 1);
        RunWire(grid, wire2, 2);

        int ret = 9999999;
        for (auto& keyVal : grid) {
            if (keyVal.second.count(1) == 1 && keyVal.second.count(2) == 1) {
                ret = std::min(ret, keyVal.second[1] + keyVal.second[2]);
            }
        }
        return ret;
    }
}

#endif