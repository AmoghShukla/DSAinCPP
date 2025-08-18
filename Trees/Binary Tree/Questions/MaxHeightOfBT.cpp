#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

int maxHeight(TreeNode* root) {
    if (root == NULL) return 0;
    int leftHeight = maxHeight(root->left);
    int rightHeight = maxHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Max Height of Binary Tree: " << maxHeight(root) << endl;

    return 0;
}