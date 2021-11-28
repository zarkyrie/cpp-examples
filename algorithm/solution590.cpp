//
// Created by JH L on 2020/2/16.
//
#include <vector>

using namespace std;

struct Node {
    int val;
    vector<Node *> children;
};

class Solution590 {
public:
    vector<int> postorder(Node *root) {
        vector<int> vec;
        helper(root, vec);
    }

    void helper(Node *node, vector<int> &v) {
        if (node) {
            vector<Node *> children = node->children;
            if (!children.empty()) {
                for (auto const &value:children) {
                    helper(value, v);
                }
            }
            v.push_back(node->val);
        }
    }
};

