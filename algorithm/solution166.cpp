//
// Created by JH L on 2021/10/3.
//
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class Sol166 {
public:
    string fractionToDecimal(int numerator, int denominator) {
        auto num = (int64_t) numerator;
        auto den = (int64_t) denominator;

        if (num % den == 0) {
            return to_string(num / den);
        }

        int64_t up = abs(num);
        int64_t down = abs(den);
        string res((num < 0 ^ den < 0 ? "-" : "") + to_string(up / down) + ".");
        unordered_map<int64_t, int> index;


        up = up % down * 10;
        for (int i = res.size(); up; i++) {
            if (index.count(up)) {
                res.insert(begin(res) + index[up], '(');
                res.push_back(')');
                break;
            }

            index[up] = i;
            res.push_back('0' + up / down);
            up = up % down * 10;
        }

        return res;
    }
};

int main() {
    Sol166 sol;
    string res = sol.fractionToDecimal(-50, 8);
    auto it = begin(res);
    int rr = it + 1;
}

