#ifndef AOC_10_H
#define AOC_10_H

#include <vector>
#include <string>

namespace AoC_10 {
    std::vector<std::vector<int>> CreateMap(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = {};
        for (int x = 0; x < mapData[0].size(); x++) {
            std::vector<int> col = {};
            for (int y = 0; y < mapData.size(); y++) {
                col.push_back(mapData[y][x] == '#' ? 1 : 0);
            }
            asteroids.push_back(col);
        }
        return asteroids;
    }

    int A(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = CreateMap(mapData);
        return -1;
    }

    int B(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = CreateMap(mapData);
        return -1;
    }
}

#endif