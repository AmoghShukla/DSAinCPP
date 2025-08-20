#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val =data;
        left = 0;
        right = 0;
    }
};

bool isleaf(Node* node) {
    return node && !node->left && !node->right;
}

void LeftBoundary(Node* root, vector<int>& result) {
    Node *cur = root->left;
    while (cur) {
        if (cur->left || cur->right) {
            result.push_back(cur->val);
        }
        cur = cur->left ? cur->left : cur->right;
    }
}

void RightBoundary(Node* root, vector<int>& result) {
    Node *cur = root->right;
    vector<int> temp;
    while (cur) {
        if (!isleaf(cur)) temp.push_back(cur->val);
        if (cur->left || cur->right) {
            temp.push_back(cur->val);
        }
        cur = cur->right ? cur->right : cur->left;
    }
    for(int i = 0; i < temp.size(); i++) {
        result.push_back(temp[i]);
    }
}

void LeafNodes(Node* root, vector<int>& result) {
    if (!root) return;
    if (isleaf(root)) {
        result.push_back(root->val);
    }
    LeafNodes(root->left, result);
    LeafNodes(root->right, result);
}

vector<int> boundaryTraversal(Node* root) {
    vector<int> result;
    if (!root) return result;

    result.push_back(root->val);
    LeftBoundary(root, result);
    LeafNodes(root, result);
    RightBoundary(root, result);

    return result;
}
