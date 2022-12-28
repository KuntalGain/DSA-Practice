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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while((root->val -  (long)p->val)*(root->val -  (long)q->val) > 0)
            root = p->val < root->val ? root->left : root->right;

        return root;
    }

// if you like the solution plz upvote.

void preorder(TreeNode *root, vector<int> &Node)
{
    if (!root)
    {
        return;
    }

    Node.push_back(root->val);
    preorder(root->left, Node);
    preorder(root->right, Node);
}

vector<int> preorderTraversal(TreeNode *root)
{

    vector<int> Node;

    preorder(root, Node);

    return Node;
}

// driver code

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(6);
    root->right->right = new TreeNode(7);

    
}