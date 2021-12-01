//
// Created by JH L on 2021/12/1.
//
#include <string>
#include <iostream>

using namespace std;

class Solution1446 {
public:
    int maxPower(string s) {
        int res = 1;
        int cnt = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                cnt++;
                res = max(res, cnt);
            } else {
                cnt = 1;
            }
        }

        return res;
    }
};

int main() {
    string s = "abbbc";
    Solution1446 sol;
    cout << sol.maxPower(s) << endl;
}

