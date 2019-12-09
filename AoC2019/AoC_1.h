#ifndef AOC_1_H
#define AOC_1_H

#include <vector>
#include <numeric>

namespace AoC_1 {
    int A(std::vector<int> moduleSizes) {
        return std::accumulate(moduleSizes.begin(), moduleSizes.end(), 0, [](int acc, int n) { return acc + n / 3 - 2; });
    }

    int B(std::vector<int> moduleSizes) {
        int totalFuel = 0;
        for (auto& moduleSize : moduleSizes) {
            int totalModuleFuel = 0;
            while (moduleSize >= 6) {
                moduleSize = moduleSize / 3 - 2;
                totalModuleFuel += moduleSize;
            }
            totalFuel += totalModuleFuel;
        }
        return totalFuel;
    }
}

#endif