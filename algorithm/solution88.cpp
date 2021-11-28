//
// Created by JH L on 2020/3/3.
//
#include <vector>

using namespace std;

class Solution88 {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int x = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1.at(i) > nums2.at(j)) {
                nums1.at(x--) = nums1.at(i--);
            } else {
                nums1.at(x--) = nums2.at(j--);
            }
        }
        while (j > 0) {
            nums1.at(x--) = nums2.at(j--);
        }
    }
};
