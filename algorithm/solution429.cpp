//
// Created by JH L on 2020/2/16.
//
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> vv;
        if (!root) {
            return {};
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> v;
            int q_size = q.size();
            for (int i = 0; i < q_size; i++) {
                Node *cur = q.front();
                q.pop();
                v.push_back(cur->val);
                for (auto &children:cur->children) {
                    q.push(children);
                }
            }
            vv.push_back(v);
        }
        return vv;
    }
};