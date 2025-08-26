#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* findLCA(TreeNode* root, int n1, int n2) {
    if (root == NULL) return NULL;
    if (root->val == n1 || root->val == n2) return root;

    TreeNode* leftLCA = findLCA(root->left, n1, n2);
    TreeNode* rightLCA = findLCA(root->right, n1, n2);

    if (leftLCA && rightLCA) return root;
    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int n1 = 4, n2 = 5;
    TreeNode* lca = findLCA(root, n1, n2);
    if (lca != NULL) {
        cout << "LCA of " << n1 << " and " << n2 << " is " << lca->val << endl;
    } else {
        cout << "LCA not found." << endl;
    }

    return 0;
}
