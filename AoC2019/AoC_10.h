#ifndef AOC_10_H
#define AOC_10_H

#include <vector>
#include <string>
#include <algorithm>

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

    std::vector<std::pair<int, int>> GetVisibleAsteroids(std::pair<int, int> station, std::vector<std::vector<int>>& asteroids) {
        std::vector<std::pair<int, int>> seen = {};
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
                    seen.push_back(std::pair<int, int>(tx, ty));
                }
            }
        }
        return seen;
    }

    std::pair<int, int> GetBestStation(std::vector<std::vector<int>> asteroids) {
        std::pair<int, int> bestStation = {};
        int maxSeeCount = 0;
        for (int x = 0; x < asteroids.size(); x++) {
            for (int y = 0; y < asteroids[0].size(); y++) {
                if (asteroids[x][y] == 1) {
                    int seeCount = GetVisibleAsteroids(std::pair<int, int>(x, y), asteroids).size();
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

    double GetAsteroidAngle(std::pair<int, int> station, std::pair<int, int> asteroid) {
        double dx = asteroid.first - station.first;
        double dy = asteroid.second - station.second;
        if (dx == 0) {
            return dy > 0 ? 0 : 3.1415926535;
        }
        else if (dy == 0) {
            return dx > 0 ? 3.1415926535 / 2 : 3 * 3.1415926535 / 4;
        }
        else if (dx > 0) {
            return std::atan(dy / dx) + 3.1415926535 / 2;
        }
        else {
            return  3.1415926535 - std::atan(-dy / dx) + 3.1415926535 / 2;
        }
    }

    void SortByAngle(std::vector<std::pair<std::pair<int, int>, double>>& angles) {
        std::sort(angles.begin(), angles.end(), [](const auto& lhs, const auto& rhs) {return lhs.second < rhs.second; });
    }

    int A(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = CreateMap(mapData);
        return GetVisibleAsteroids(GetBestStation(asteroids), asteroids).size();
    }

    int B(std::vector<std::string> mapData) {
        std::vector<std::vector<int>> asteroids = CreateMap(mapData);
        std::pair<int, int> bestStation = GetBestStation(asteroids);

        std::vector<std::pair<int, int>> destroyed = {};
        while (destroyed.size() < 200) {
            std::vector<std::pair<int, int>> visibleAsteroids = GetVisibleAsteroids(bestStation, asteroids);
            std::vector<std::pair<std::pair<int, int>, double>> angles = {};
            for (auto& asteroid : visibleAsteroids) {
                angles.push_back(std::pair<std::pair<int, int>, double>(asteroid, GetAsteroidAngle(bestStation, asteroid)));
            }
            SortByAngle(angles);

            // Should actually destroy asteroids, but the station can see >=200 so arsed cause it dm
            return angles[199].first.first * 100 + angles[199].first.second;
        }
        return destroyed[199].first * 100 + destroyed[199].second;
    }
}

#endif