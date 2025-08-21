#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int data) {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

vector<vector<int>> verticalOrderTraversal(Node* root) {
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<Node*, pair<int, int>>> q; // Node, (horizontal distance, level)
    q.push({root, {0, 0}});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        Node* node = p.first;
        int x = p.second.first;
        int y = p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left) q.push({node->left, {x-1, y+1}});
        if(node->right) q.push({node->right, {x+1, y+1}});
    }
    vector<vector<int>> result;
    for( auto a : nodes){
        vector<int> column;
        for(auto b : a.second){
            column.insert(column.end(), b.second.begin(), b.second.end()); // Insert all values from the multiset which are at the same vertical level
        }
        result.push_back(column);
    }
    return result;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>> result = verticalOrderTraversal(root);
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}