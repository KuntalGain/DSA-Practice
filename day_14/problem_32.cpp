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

unordered_set<int> s;
bool findTarget(TreeNode *root, int k)
{
    if (!root)
        return false;
    if (s.count(k - root->val))
        return true;
    s.insert(root->val);
    return findTarget(root->left, k) || findTarget(root->right, k);
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

    if (findTarget(root,9))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}