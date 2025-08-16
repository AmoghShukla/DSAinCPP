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
    TreeNode* root = new TreeNode();
    root->val = 1;
    root->left = new TreeNode();
    root->left->val = 2;
    root->right = new TreeNode();
    root->right->val = 3;
    vector<int> result = postorderTraversal(root);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}