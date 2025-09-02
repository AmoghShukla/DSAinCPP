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

int FindHeightL(TreeNode* node){
    int height = 0;
    while(node){
        height++;
        node = node->left;
    }
    return height;
}

int FindHeightR(TreeNode* node){
    int height = 0;
    while(node){
        height++;
        node = node->right;
    }
    return height;
}

int countNodes(TreeNode* root) {
    if(!root) return 0;

    int leftHeight = FindHeightL(root);
    int rightHeight = FindHeightR(root);

    if(leftHeight == rightHeight) return (1<<leftHeight) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}