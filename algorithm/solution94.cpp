//
// Created by JH L on 2020/2/16.
//
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution94 {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> vec;
        helper(root, vec);
        return vec;
    }

    void helper(TreeNode *tr, vector<int> &vec) {
        if (tr) {
            if (tr->left) {
                helper(tr->left, vec);
            }
            vec.push_back(tr->val);
            if (tr->right) {
                helper(tr->right, vec);
            }
        }
    }
};




