//
// Created by JH L on 2020/5/9.
//
#include <iostream>

class Solution69 {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x / 2;
        int mid = hi / 2;
        while (lo < mid) {
            if (x >= mid * mid && x < (mid + 1) * (mid + 1)) {
                return mid;
            } else if (x > mid * mid) {
                mid = lo / 2;
            } else {
                mid = hi / 2;
            }
        }
    }
};

int mySqrt(int x) {
    int lo = 0;
    int hi = x;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (x >= mid * mid && x < (mid + 1) * (mid + 1)) {
            return mid;
        } else if (x > mid * mid) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    return -1;
}

int main() {
    std::cout << mySqrt(8);
}

