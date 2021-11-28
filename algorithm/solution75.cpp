//
// Created by JH L on 2020/10/7.
//
#include <vector>
#include <iostream>

class Solution {
public:
    void sortColors(std::vector<int> &nums) {
        std::vector<int> a;
        std::vector<int> b;
        std::vector<int> c;
        for (int &i:nums) {
            switch (i) {
                case 0:
                    a.push_back(i);
                    break;
                case 1:
                    b.push_back(i);
                    break;
                case 2:
                    c.push_back(i);
                    break;
                default:
                    break;
            }
        }
        a.insert(a.end(), b.begin(), b.end());
        a.insert(a.end(), c.begin(), c.end());
        nums.clear();
        nums.insert(nums.end(), a.begin(), a.end());
    }
};

int main() {
    std::vector<int> e = {2, 0, 2, 1, 1, 0};
    Solution s;
    s.sortColors(e);
    std::for_each(e.begin(), e.end(), [](const auto &i) { std::cout << i << std::endl; });
}
