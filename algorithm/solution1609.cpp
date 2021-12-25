//
// Created by JH L on 2021/12/25.
//
#include <iostream>
#include <queue>

using namespace std;

namespace solution1609 {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode() : val(0), left(nullptr), right(nullptr) {}

        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

    class Solution1609 {
    public:
        bool isEvenOddTree(TreeNode *root) {
            queue<TreeNode *> q;
            q.push(root);
            int level = 0;

            while (!q.empty()) {
                size_t size = q.size();
                int pre = level % 2 == 0 ? INT_MIN : INT_MAX;

                for (int i = 0; i < size; ++i) {
                    TreeNode *el = q.front();
                    q.pop();

                    int val = el->val;
                    //判断值是否符合下标
                    if (level % 2 == val % 2) {
                        return false;
                    }

                    //判断与前一个值是否递增或递减关系
                    if (val % 2 == 1 && val <= pre) {
                        return false;
                    }

                    if (val % 2 == 0 && val >= pre) {
                        return false;
                    }

                    pre = val;

                    if (el->left != nullptr) {
                        q.push(el->left);
                    }

                    if (el->right != nullptr) {
                        q.push(el->right);
                    }
                }

                level++;
            }
            return true;
        }
    };
}

int main() {
    solution1609::Solution1609 sol;
    cout << "" << endl;
}



