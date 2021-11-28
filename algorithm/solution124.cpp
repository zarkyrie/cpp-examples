//
// Created by JH L on 2020/6/21.
//
#include <iostream>
#include <opencl-c.h>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    int maxSum = INT_MIN;

public:
    int maxGain(TreeNode *node) {
        if (node == nullptr) {
            return 0;
        }

        int leftGain = max(maxGain(node->left), 0);
        int rightGain = max(maxGain(node->right), 0);

        int priceNewpath = node->val + leftGain + rightGain;

        maxSum = max(maxSum, priceNewpath);

        return node->val + max(leftGain, rightGain);
    }

    int maxPathSum(TreeNode *root) {
        maxGain(root);
        return maxSum;
    }
};


