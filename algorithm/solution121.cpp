#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maxPro = 0;
        int minPrice = INT_MAX;
        for (int &price: prices) {
            minPrice = min(minPrice, price);
            maxPro = max(maxPro, price - minPrice);
        }
        return maxPro;
    }
};

int main() {
    Solution sol;
    vector<int> v;
    cout << sol.maxProfit(v) << endl;
}