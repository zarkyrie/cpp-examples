#include <MacTypes.h>

//
// Created by JH L on 2020/5/31.
//
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        return check(root, root);
    }

    bool check(TreeNode *a, TreeNode *b) {
        if (a != nullptr && b != nullptr) {
            return true;
        }
        if (!a || !b) {
            return false;
        }
        return a->val == b->val && check(a->left, b->right) && check(a->right, b->left);
    }
};

int main() {
    int a = 1;
    int b = 2;
    int *c = &a;
    int *d = &a;
    std::cout << (!c && !d) << std::endl;
}

