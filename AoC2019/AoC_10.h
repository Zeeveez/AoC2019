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

    int LowestCommonFactor(int a, int b) {
        int f = -1;
        for (int i = 2; i <= std::min(std::abs(a), std::abs(b)); i++) {
            if (std::abs(a) % i == 0 && std::abs(b) % i == 0) {
                f = i;
            }
        }
        return f;
    }

    std::vector<std::pair<int, int>> GetLineOfSight(std::pair<int, int> station, std::pair<int, int> sight) {
        std::vector<std::pair<int, int>> lineOfSight = {};
        int dx = sight.first - station.first;
        int dy = sight.second - station.second;
        int factor = LowestCommonFactor(dx, dy);
        if (dx == 0) {
            for (int i = 1; i < std::abs(dy); i++) {
                lineOfSight.push_back(std::pair<int, int>(station.first, station.second + i * dy / std::abs(dy)));
            }
        }
        else if (dy == 0) {
            for (int i = 1; i < std::abs(dx); i++) {
                lineOfSight.push_back(std::pair<int, int>(station.first + i * dx / std::abs(dx), station.second));
            }
        }
        else if (factor != -1) {

            for (int x = station.first + dx / factor, y = station.second + dy / factor; x != sight.first; x += dx / factor, y += dy / factor) {
                lineOfSight.push_back(std::pair<int, int>(x, y));
            }
        }
        return lineOfSight;
    }

    int CountVisibleAsteroids(std::pair<int, int> station, std::vector<std::vector<int>>& asteroids) {
        int seeCount = 0;
        for (int tx = 0; tx < asteroids.size(); tx++) {
            for (int ty = 0; ty < asteroids[0].size(); ty++) {
                if (!(tx == station.first && ty == station.second) && asteroids[tx][ty] == 1) {
                    bool hit = false;
                    for (std::pair<int, int>& point : GetLineOfSight(std::pair<int, int>(station.first, station.second), std::pair<int, int>(tx, ty))) {
                        if (asteroids[point.first][point.second] == 1) {
                            hit = true;
                            break;
                        }
                    }
                    if (hit) { continue; }
                    seeCount++;
                }
            }
        }
        return seeCount;
    }

    std::pair<int, int> GetBestStation(std::vector<std::vector<int>> asteroids) {
        std::pair<int, int> bestStation = {};
        int maxSeeCount = 0;
        for (int x = 0; x < asteroids.size(); x++) {
            for (int y = 0; y < asteroids[0].size(); y++) {
                if (asteroids[x][y] == 1) {
                    int seeCount = CountVisibleAsteroids(std::pair<int, int>(x, y), asteroids);
                    if (seeCount > maxSeeCount) {
                        maxSeeCount = seeCount;
                        bestStation.first = x;
                        bestStation.second = y;
                    }

                }
            }
        }
        return bestStation;
    }

    int A(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = CreateMap(mapData);
        return CountVisibleAsteroids(GetBestStation(asteroids), asteroids);
    }

    int B(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = CreateMap(mapData);
        std::pair<int, int> bestStation = GetBestStation(asteroids);
        std::vector<std::pair<std::pair<int, int>, double>> angles = {};
        return -1;
    }
}

#endif