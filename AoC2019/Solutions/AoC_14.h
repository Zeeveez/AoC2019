#ifndef AOC_14_H
#define AOC_14_H

#include <map>
#include <string>
#include <vector>

namespace AoC_14 {
    int A(std::map<std::string, std::pair<int, std::vector<std::pair<int, std::string>>>> formulae) {
        std::map<std::string, int> needs = { {"FUEL",1}, {"ORE",0} };
        while (true) {
            for (auto& need : needs) {
                if (need.first != "ORE") {
                    int needCount = need.second;
                    while (need.second > 0) {
                        need.second -= formulae[need.first].first;
                        for (auto& output : formulae[need.first].second) {
                            if (needs.count(output.second) == 0) {
                                needs[output.second] = output.first;
                            }
                            else {
                                needs[output.second] += output.first;
                            }
                        }
                    }
                }
            }
            bool done = true;
            for (auto& need : needs) {
                if (need.first != "ORE") {
                    if (need.second > 0) {
                        done = false;
                    }
                }
            }
            if (done) { break; }
        }
        return needs["ORE"];
    }

    long long B(std::map<std::string, std::pair<int, std::vector<std::pair<int, std::string>>>> formulae) {
        std::map<std::string, long long> needs = { {"FUEL",1}, {"ORE",0} };
        long long fuel = 1;
        long long roughOrePerFuel = 0;
        while (true) {
            for (auto& need : needs) {
                if (need.first != "ORE") {
                    long long needCount = need.second;
                    long long useCount = 0;
                    useCount = need.second / formulae[need.first].first;
                    need.second -= useCount * formulae[need.first].first;
                    if (need.second > 0) {
                        useCount++;
                        need.second -= formulae[need.first].first;
                    }
                    for (auto& output : formulae[need.first].second) {
                        if (needs.count(output.second) == 0) {
                            needs[output.second] = output.first * useCount;
                        }
                        else {
                            needs[output.second] += output.first * useCount;
                        }
                    }
                }
            }
            bool done = true;
            for (auto& need : needs) {
                if (need.first != "ORE") {
                    if (need.second > 0) {
                        done = false;
                    }
                }
            }
            if (done) {
                if (fuel == 1) {
                    roughOrePerFuel = needs["ORE"];
                }
                if (needs["ORE"] < 1000000000000) {
                    long long oreRemaining = 1000000000000 - needs["ORE"];
                    if (oreRemaining > roughOrePerFuel * 100) {
                        needs["FUEL"] += (oreRemaining / roughOrePerFuel) - 100 + 1;
                        fuel += (oreRemaining / roughOrePerFuel) - 100 + 1;
                    }
                    else {
                        needs["FUEL"]++;
                        fuel++;
                    }
                }
                else {
                    break;
                }
            }
        }
        return fuel - 1;
    }
}

#endif