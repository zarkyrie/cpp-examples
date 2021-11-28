#include <cstdint>
#include <iostream>

//
// Created by JH L on 2021/11/27.
//
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            if (n & (1 << i)) {
                res++;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    std::cout << sol.hammingWeight(5) << std::endl;
}

