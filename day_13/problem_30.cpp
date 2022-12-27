#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// search in BST

TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root == nullptr) return new TreeNode(val);

    TreeNode* Node = new TreeNode();

    if(root->val > val)
        root->left = insertIntoBST(root->left,val);
    else
        root->right = insertIntoBST(root->right,val);

    return root;
}

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

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    root->right = new TreeNode(7);

    TreeNode* finalRoot = insertIntoBST(root,2);

    vector<int> ans = preorderTraversal(finalRoot);

    for(auto i : ans) cout << i << " ";
}