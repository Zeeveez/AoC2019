#ifndef AOC_4_H
#define AOC_4_H

#include <string>
#include <algorithm>

namespace AoC_4 {
    bool PWCheck(int _pw, bool (*f)(int)) {
        std::string pw = std::to_string(_pw);
        for (int i = 0; i < pw.length() - 1; i++) {
            if (pw[i + 1] < pw[i]) {
                return false;
            }
        }
        if (!std::any_of(pw.begin(), pw.end(), [pw, f](char c) { return f(std::count(pw.begin(), pw.end(), c)); })) {
            return false;
        }
        return true;
    }

    int Run(int pwStart, int pwEnd, bool (*f)(int)) {
        pwStart = std::max(pwStart, 100000);
        pwEnd = std::min(pwEnd, 999999);
        int count = 0;
        for (int i = pwStart; i <= pwEnd; i++) {
            count += PWCheck(i, f) ? 1 : 0;
        }
        return count;
    }

    int A(int pwStart, int pwEnd) {
        return Run(pwStart, pwEnd, [](int n) {return n >= 2; });
    }

    int B(int pwStart, int pwEnd) {
        return Run(pwStart, pwEnd, [](int n) {return n == 2; });
    }
}

#endif