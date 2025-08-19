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

bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) return (p == q);
        return (p->val == q->val) 
        && isSameTree(p->left, q->left) 
        && isSameTree(p->right, q->right);
        
}

int main(){
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    if (isSameTree(root1, root2)) {
        cout << "The two trees are identical." << endl;
    } else {
        cout << "The two trees are not identical." << endl;
    }

    return 0;   
}