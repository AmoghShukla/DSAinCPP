#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> preOrderTraversal(TreeNode* root) {
    vector<int> result;
    if (root == NULL) return result;

    stack<TreeNode*> s;
    s.push(root);

    while (!s.empty()) {
        TreeNode* node = s.top();
        s.pop();
        result.push_back(node->val);

        // Push right child first so that left child is processed first
        if (node->right != NULL) s.push(node->right);
        if (node->left != NULL) s.push(node->left);
    }

    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> result = preOrderTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}