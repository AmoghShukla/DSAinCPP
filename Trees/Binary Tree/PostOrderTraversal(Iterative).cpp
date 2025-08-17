#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st1, st2;
        vector<int> ans;
        if (root == NULL) return ans;
        st1.push(root);
        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);
            if (root->left != NULL){
                st1.push(root->left);
            }
            if (root->right != NULL){
                st1.push(root->right);
            }

        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
}

int main(){
    TreeNode* root = new TreeNode(); // Here a new TreeNode is created which will be the root of the binary tree
    root->val = 1; // The value of the root node is set to 1
    root->left = new TreeNode(); // Here a new TreeNode is created which will be the left child of the root
    root->left->val = 2; // The value of the left child is set to 2
    root->right = new TreeNode(); // Here a new TreeNode is created which will be the right child of the root
    root->right->val = 3; // The value of the right child is set to 3
    vector<int> result = postorderTraversal(root); // The postorder traversal of the binary tree is obtained here
    for (int i : result) { // Iterate through the result vector
        cout << i << " "; // Print each value followed by a space
    }
    return 0; 
}