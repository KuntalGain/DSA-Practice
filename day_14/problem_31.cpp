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

bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }
bool valid(TreeNode* root, long min, long max) {
        if (!root) {
            return true;
        }
        if (root -> val <= min || root -> val >= max) {
            return false;
        }
        return valid(root -> left, min, root -> val) && valid(root -> right, root -> val, max);
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