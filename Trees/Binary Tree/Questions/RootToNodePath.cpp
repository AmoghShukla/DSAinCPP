#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool getPath(TreeNode* root, int target, vector<int>& path) {
    if (root == NULL) return false;
    path.push_back(root->val);
    if (root->val == target) return true;
    if (getPath(root->left, target, path) || getPath(root->right, target, path)) return true;
    path.pop_back();
    return false;
}

vector<int> rootToNodePath(TreeNode* root, int target) {
    vector<int> path;
    if (root == NULL) return {};
    if (getPath(root, target, path)) return path;
    return {};
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int target = 5;
    vector<int> path = rootToNodePath(root, target);
    if (!path.empty()) {
        cout << "Path from root to node " << target << ": ";
        for (int val : path) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "Node " << target << " not found in the tree." << endl;
    }

    return 0;
}