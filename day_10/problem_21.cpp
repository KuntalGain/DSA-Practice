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

void preorder(TreeNode* root , vector<int> &Node)
{
    if(!root) {
        return;
    }

    Node.push_back(root->val);
    preorder(root->left,Node);
    preorder(root->right,Node);
}

vector<int> preorderTraversal(TreeNode* root) {
    
    vector<int> Node;

    preorder(root,Node);

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

    vector<int> Nodes = preorderTraversal(root);

    for(auto i : Nodes)
        cout << i << " ";

    return 0;
}