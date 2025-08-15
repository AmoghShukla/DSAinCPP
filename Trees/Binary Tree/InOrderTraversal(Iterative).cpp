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
        TreeNode* node = root; // Start with the root node

        // Iterative inorder traversal using a stack
        while(true){ // Infinite loop
            if (node != NULL){ // If the current node is not null
                st.push(node); // Push the current node onto the stack
                node = node->left; // Move to the left child
            } else {
                if(st.empty() == true) break; // If the stack is empty, exit the loop
                node = st.top(); // Get the top node from the stack
                st.pop(); // Pop the top node from the stack
                ans.push_back(node->val); // Add the node's value to the result
                node = node->right; // Move to the right child
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