#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> topView(Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;
    map<int, int> mpp;
    queue<pair<Node*, int>> q; // Node, horizontal distance
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int sec = it.second;
        if(mpp.find(sec) == mpp.end()){ // if the map mpp is not able to find the horizontal distance sec
            mpp[sec] = node->val; // Store the first node at this horizontal distance
        }
        if (node->left) q.push({node->left, sec - 1});
        if (node->right) q.push({node->right, sec + 1});
    }
    for (auto it : mpp) ans.push_back(it.second);
    return ans;
}

int main(){
    Node* node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    node->right->right = new Node(6);
    vector<int> top_view = topView(node);
    for (int val : top_view) {
        cout << val << " ";
    }
    return 0;
}