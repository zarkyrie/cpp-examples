//
// Created by JH L on 2020/3/18.
//
#include <vector>
#include <iostream>

class Solution836 {
public:
    bool isRectangleOverlap(std::vector<int> &rec1, std::vector<int> &rec2) {
        return rec1[0] < rec2[2] && rec1[2] > rec2[0] && rec1[1] < rec2[3] && rec1[3] > rec2[1];
    }
};

int main() {
    std::vector<int> rec1 = {0, 0, 2, 2};
    std::vector<int> rec2 = {1, 1, 3, 3};
    Solution836 sol;
    std::cout << sol.isRectangleOverlap(rec1, rec2) << std::endl;
    return 0;
}

