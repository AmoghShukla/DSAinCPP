#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> rightsideview(TreeNode* root) {
    vector<int> result;
    rightView(root, 1, result);
    return result;
}

void rightView(TreeNode* root, int level, vector<int> &result) {
    if (root == NULL) return;

    if (result.size() < level) {
        result.push_back(root->val);
    }

    rightView(root->right, level + 1, result);
    rightView(root->left, level + 1, result);
}
    
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(5);
    vector<int> result = rightsideview(root);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}