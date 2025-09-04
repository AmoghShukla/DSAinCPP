#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Recursive helper
TreeNode* buildTreePostIn(vector<int>& inorder, int is, int ie,
                          vector<int>& postorder, int ps, int pe,
                          unordered_map<int,int>& hm) {
    if (ps > pe || is > ie) return NULL;
    
    TreeNode* root = new TreeNode(postorder[pe]);
    int inRoot = hm[postorder[pe]];
    int numsLeft = inRoot - is;
    
    root->left = buildTreePostIn(inorder, is, inRoot - 1,
                                 postorder, ps, ps + numsLeft - 1,
                                 hm);
    
    root->right = buildTreePostIn(inorder, inRoot + 1, ie,
                                  postorder, ps + numsLeft, pe - 1,
                                  hm);
    
    return root;
}

// Main buildTree function
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    if (inorder.size() != postorder.size()) return NULL;
    
    unordered_map<int,int> hm;
    for (int i = 0; i < inorder.size(); i++) {
        hm[inorder[i]] = i;
    }
    
    return buildTreePostIn(inorder, 0, inorder.size() - 1,
                           postorder, 0, postorder.size() - 1,
                           hm);
}

// Utility function to print preorder traversal
void printPreorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    vector<int> inorder   = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    
    TreeNode* root = buildTree(inorder, postorder);
    
    cout << "Preorder traversal of constructed tree: ";
    printPreorder(root);
    cout << endl;
    
    return 0;
}
