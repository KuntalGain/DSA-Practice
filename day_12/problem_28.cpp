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

// display
// void printTree(TreeNode* root, int indent) {
//   if (root == nullptr) return;
//   printTree(root->right, indent + 4);
//   if (indent) {
//     std::cout << std::setw(indent) << ' ';
//   }
//   cout << root->val << "\n ";
//   printTree(root->left, indent + 4);
// }

 bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == nullptr) return false;
    if(root->val == targetSum && root->left == nullptr && root->right == nullptr) return true;

    return hasPathSum(root->left,targetSum - root->val) || hasPathSum(root->right,targetSum - root->val);
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // TreeNode* displayTree = invertTree(root);

    // printTree(root,0);

    if(hasPathSum(root,6))
        cout << "found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}