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

int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root, maxi);
        return maxi;
        
    }
    
int maxPath(TreeNode* root, int& maxi){
        if (root == NULL) return 0;

        int lh = max(0, maxPath(root->left, maxi));
        int rh = max(0, maxPath(root->right, maxi));

        maxi = max(maxi, lh + rh + root->val);
        return max(lh , rh) + root->val;
        
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Maximum path sum of the binary tree is: " << maxPathSum(root) << endl;
    return 0;
}