#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        int val = x;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(! q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0; i<size; i++){
            TreeNode* node = q.front(); // TreeNode* node means the current node = q.front() means the front of the queue
            q.pop(); // it removes the front element from the queue and allows us to process the next element
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node->val); // add the current node's value to the level vector means to keep track of all nodes at the current level
        }
        ans.push_back(level); // add the current level's values to the final answer
    }
    return ans;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> result = levelOrder(root);
    for(const auto& level : result){
        for(int val : level){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}