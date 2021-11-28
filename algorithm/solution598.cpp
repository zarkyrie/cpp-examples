//
// Created by JH L on 2021/11/7.
//
#include <vector>

using namespace std;

class Sol598 {
public:
    static int maxCount(int m, int n, vector<vector<int>> &ops);
};

int Sol598::maxCount(int m, int n, vector<vector<int>> &ops) {
    int min_row = m;
    int min_col = n;
    for (auto e: ops) {
        if (min_row > e[0]) {
            min_row = e[0];
        }

        if (min_col > e[1]) {
            min_col = e[1];
        }
    }

    return min_row * min_col;
}

