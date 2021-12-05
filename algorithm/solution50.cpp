//
// Created by JH L on 2021/12/5.
//
#include <iostream>

using namespace std;

class Solution50 {
public:
    double quickMul(double x, long long N) {
        if (N == 0) {
            return 1.0;
        }
        double y = quickMul(x, N / 2);
        return N % 2 == 0 ? y * y : y * y * x;
    }

    double myPow(double x, int n) {
        long long N = n;
        return N >= 0 ? quickMul(x, N) : 1.0 / quickMul(x, -N);
    }
};

int main() {
    Solution50 sol;
    cout << sol.quickMul(2, 3) << endl;
}

