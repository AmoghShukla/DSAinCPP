#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        val = data;
        left = right = nullptr;
    }
};

class DBT{
    private:
        int diameter(TreeNode* root, int& dia){
            if (root == nullptr) return 0;

            int lh = diameter(root->left, dia);
            int rh = diameter(root->right, dia);

            dia = max(dia, lh + rh);
            return 1 + max(lh, rh);
        }

    public:
        int diameterOfBinaryTree(TreeNode* root) {
            int dia = 0;
            diameter(root, dia);
            return dia;
        }
};

int main(){
    DBT tree;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Diameter of the binary tree is: " << tree.diameterOfBinaryTree(root) << endl;
    return 0;
}