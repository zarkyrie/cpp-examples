//
// Created by JH L on 2020/3/19.
//
#include <string>
#include <iostream>

class Solution409 {
public:
    int longestPalindrome(std::string s) {
        int odds = 0;
        for (char c = 'A'; c <= 'z'; c++)
            odds += count(s.begin(), s.end(), c) & 1;
        return s.size() - odds + (odds > 0);
    }
};

int main() {
    std::string str = "123";
    Solution409 sol;
    std::cout << sol.longestPalindrome(str) << std::endl;
}
