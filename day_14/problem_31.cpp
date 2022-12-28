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

bool isBST(TreeNode* root , int _min , int _max)
{
    if(root == nullptr) return true;
    if(root->val >= _max || root->val <= _max) return false;

    return isBST(root->left,_min,root->val) && isBST(root->left,root->val,_max);
}

bool isValidBST(TreeNode* root) {
    return isBST(root,INT_MIN,INT_MAX);    
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

    if(isValidBST(root))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}