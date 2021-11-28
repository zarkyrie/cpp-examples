//
// Created by JH L on 2020/10/8.
//
#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    void reverseString(std::vector<char> &s) {
        int len = s.size();
        int x = len / 2;
        for (int i = 0, j = len - 1; i < x; i++, j--) {
            if (s[i] != s[j]) {
                std::swap(s[i], s[j]);
            }
        }
    }
};

int main() {
    std::vector<char> v = {'A', ' ', 'm', 'a', 'n', ',', ' ', 'a', ' ', 'p', 'l', 'a', 'n', ',', ' ', 'a', ' ', 'c',
                           'a', 'n', 'a', 'l', ':', ' ', 'P', 'a', 'n', 'a', 'm', 'a'};
    std::for_each(v.begin(), v.end(), [](const auto &i) { std::cout << i << ';'; });
    std::cout << std::endl;
    Solution s;
    s.reverseString(v);
    std::for_each(v.begin(), v.end(), [](const auto &i) { std::cout << i << ';'; });

    std::vector<char> v1 = {'1', '2', '3'};
    s.reverseString(v1);
    std::cout << std::endl;
    std::for_each(v1.begin(), v1.end(), [](const auto &i) { std::cout << i << ';'; });
}

