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

int maxDepth(TreeNode* root) {
        if (root  == NULL) return 0;

        int left = maxDepth(root->left);
        if (left == -1) return -1; 

        int right = maxDepth(root->right);
        if (right == -1) return -1;

        if (abs(left - right) > 1) return -1;

        return max(left, right) + 1;
        
}

bool isBalanced(TreeNode* root) {
    return maxDepth(root) != -1;    
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Is Balanced: " << (isBalanced(root) ? "Yes" : "No") << endl;

    return 0;
}