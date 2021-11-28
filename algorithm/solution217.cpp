//
// Created by JH L on 2020/12/13.
//
#include <vector>
#include <unordered_map>
#include <iostream>

using std::cout;
using std::vector;
using std::unordered_map;
using std::endl;

class Solution217 {
public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_map<int, int> map;
        for (int &num : nums) {
            if (map.count(num) != 0) {
                return true;
            } else {
                map.insert({num, 1});
            }
        }
        return false;
    }
};

int main() {
    Solution217 sol;
    vector<int> v{1, 2, 3};
    bool r = sol.containsDuplicate(v);
    cout << r << endl;
    return 0;
}

