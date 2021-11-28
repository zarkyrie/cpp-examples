//
// Created by JH L on 2020/5/3.
//
#include <vector>
#include <cmath>

class Solution {
public:
    int maxSubArray(std::vector<int> &nums) {
        int pre = 0;
        int max = nums[0];
        for (auto &v:nums) {
            pre = std::max(v, pre + v);
            max = std::max(max, pre);
        }
        return max;
    }
};

