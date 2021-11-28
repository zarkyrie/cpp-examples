//
// Created by JH L on 2020/2/16.
//
#include <vector>

using namespace std;
typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
} TreeNode;

class Solution144 {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> vec;
        helper(root, vec);
        return vec;
    }

    void helper(TreeNode *tr, vector<int> &vec) {
        if (tr) {
            vec.push_back(tr->val);
            if (tr->left) {
                helper(tr->left, vec);
            }
            if (tr->right) {
                helper(tr->right, vec);
            }
        }
    }
};

