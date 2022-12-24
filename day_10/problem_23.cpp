#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void inOrder(TreeNode* root , vector<int> &Node)
{
    if(!root) {
        return;
    }

   
    inOrder(root->left,Node);
    Node.push_back(root->val);
    inOrder(root->right,Node);
}

vector<int> inOrderTraversal(TreeNode* root) {
    
    vector<int> Node;

    inOrder(root,Node);

    return Node;

}

// driver code

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = nullptr;
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    root->right->right = nullptr;

    vector<int> Nodes = inOrderTraversal(root);

    for(auto i : Nodes)
        cout << i << " ";

    return 0;
}