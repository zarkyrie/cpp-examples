//
// Created by JH L on 2020/4/16.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution56 {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        if (intervals.empty()) {
            return {};
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            vector<int> interval = intervals[i];
            int left = interval[0];
            int right = interval[1];
            int pre_right = merged.back()[1];
            if (pre_right >= left) {
                merged.back()[1] = max(right, merged.back()[1]);
                continue;
            }
            merged.push_back(interval);
        }
        return merged;
    }
};

int main() {
    Solution56 solution56;
}