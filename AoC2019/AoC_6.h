#ifndef AOC_6_H
#define AOC_6_H

#include <map>
#include <string>
#include <vector>
#include <tuple>

namespace AoC_6 {
    std::map<std::string, std::string> MakeOrbitMap(std::vector<std::tuple<std::string, std::string>> orbits) {
        std::map<std::string, std::string> orbitMap = {};
        for (auto& orbit : orbits) {
            orbitMap[std::get<1>(orbit)] = std::get<0>(orbit);
        }
        return orbitMap;
    }

    std::vector<std::string> GetOrbitPath(std::map<std::string, std::string> orbitMap, std::string node) {
        std::vector<std::string> orbitPath = {};
        while (orbitMap.count(node) == 1) {
            orbitPath.push_back(node);
            node = orbitMap[node];
        }
        return orbitPath;
    }

    int A(std::vector<std::tuple<std::string, std::string>> orbits) {
        std::map<std::string, std::string> orbitMap = MakeOrbitMap(orbits);
        return std::accumulate(orbitMap.begin(), orbitMap.end(), 0,
            [orbitMap](int acc, auto node) {return acc + GetOrbitPath(orbitMap, node.first).size(); });
    }

    int B(std::vector<std::tuple<std::string, std::string>> orbits) {
        std::map<std::string, std::string> orbitMap = MakeOrbitMap(orbits);

        std::vector<std::string> SAN_path = GetOrbitPath(orbitMap, "SAN");
        std::vector<std::string> YOU_path = GetOrbitPath(orbitMap, "YOU");

        while (SAN_path.back() == YOU_path.back()) {
            SAN_path.pop_back();
            YOU_path.pop_back();
        }

        return SAN_path.size() + YOU_path.size() - 2;
    }
}

#endif