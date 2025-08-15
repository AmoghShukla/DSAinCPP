#include<bits/stdc++.h>
using namespace std;

// Creating the binary tree node structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; // Vector to store the inorder traversal
        stack<TreeNode*> st; // Stack to store the nodes
        TreeNode* node = root;
        while(true){
            if (node != NULL){
                st.push(node);
                node = node->left;
            } else {
                if(st.empty() == true) break;
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    vector<int> result = inorderTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}