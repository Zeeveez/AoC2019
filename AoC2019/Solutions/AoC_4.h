#ifndef AOC_4_H
#define AOC_4_H

#include <string>
#include <algorithm>
#include <numeric>

namespace AoC_4 {
    bool PWCheck(int _pw, bool (*f)(int)) {
        std::string pw = std::to_string(_pw);
        for (size_t i = 0; i < pw.length() - 1; i++) {
            if (pw[i + 1] < pw[i]) {
                return false;
            }
        }
        return std::any_of(pw.begin(), pw.end(), [pw, f](char c) { return f(std::count(pw.begin(), pw.end(), c)); });
    }

    int Run(int pwStart, int pwEnd, bool (*f)(int)) {
        pwStart = std::max(pwStart, 100000);
        pwEnd = std::min(pwEnd, 999999);
        std::vector<int> range(pwEnd - pwStart + 1);
        std::iota(range.begin(), range.end(), pwStart);
        return std::accumulate(range.begin(), range.end(), 0, [f](int acc, int pw) { return acc + (PWCheck(pw, f) ? 1 : 0); });
    }

    int A(int pwStart, int pwEnd) {
        return Run(pwStart, pwEnd, [](int n) {return n >= 2; });
    }

    int B(int pwStart, int pwEnd) {
        return Run(pwStart, pwEnd, [](int n) {return n == 2; });
    }
}

#endif