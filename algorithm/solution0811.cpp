//
// Created by JH L on 2020/4/23.
//
#include <iostream>

class Solution0811 {
public:
    int waysToChange(int n) {
        int way = 0;
        this->way(n, way);
        return way;
    }

private:
    int way(int n, int way) {
        int coins[] = {25, 10, 5, 1};
        for (auto c:coins) {
            if (n - c > 0) {
                way++;
                this->way(n - c, way);
            }
        }
        return way;
    }
};

int main() {
    std::cout << "hello" << std::endl;
    Solution0811 s;
    int n = s.waysToChange(4);
    std::cout << n;
}

