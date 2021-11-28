//
// Created by JH L on 2020/9/26.
//
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode *root, int sum) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(root, sum, result, path);
        return result;
    }

    void dfs(TreeNode *node, int sum, vector<vector<int>> &result, vector<int> &path) {
        if (!node) {
            return;
        }

        path.push_back(node->val);

        if (!(node->left) && !(node->right) && sum == node->val) {
            result.push_back(path);
        }

        dfs(node->left, sum - node->val, result, path);
        dfs(node->right, sum - node->val, result, path);
        path.pop_back();
    }
};

