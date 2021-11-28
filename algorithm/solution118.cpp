//
// Created by JH L on 2020/12/6.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution118 {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                if (j == 0) {
                    row.push_back(1);
                } else if (j == i) {
                    row.push_back(1);
                } else {
                    vector<int> preRow = result[i - 1];
                    int val = preRow[j - 1] + preRow[j];
                    row.push_back(val);
                }
            }
            result.push_back(row);
        }
        return result;
    }
};

int main() {
    Solution118 sol;
    vector<vector<int>> r = sol.generate(5);
    cout << "" << endl;
    for (auto &v:r) {
        for (auto &a:v) {
            cout << a << endl;
        }
    }
}

