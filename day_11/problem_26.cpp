// level Wise Traversal

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

bool isMirror(TreeNode* l , TreeNode* r) {
    if(l == nullptr && r == nullptr) return true;
    if(l == nullptr || r == nullptr) return false;

    return (l->val == r->val) && isMirror(l->left,r->right) && isMirror(l->right,r->left);
}

bool isSymmetric(TreeNode* root) {
    if(root == nullptr) return true;

    return isMirror(root->left,root->right);
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(2);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    if(isSymmetric(root))
        cout << "Tree is Symmetric" << endl;
    else
        cout << "Tree is non-Symmertric" << endl;

    return 0;
}