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

vector<vector<int>> res;

void buildVector(TreeNode* root , int level) {
    if(root == nullptr) return;
    if(res.size() == level)
        res.push_back(vector<int>());
    
    res[level].push_back(root->val);
    buildVector(root->left,level+1);
    buildVector(root->right,level+1);
}

vector<vector<int>> levelOrder(TreeNode *root)
{

   buildVector(root,0);

   return res;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    

    vector<vector<int>> Nodes = levelOrder(root);

    for (int i = 0; i < Nodes.size(); i++){
        for (int j = 0; j < Nodes.size(); j++){
            cout << Nodes[i][j] << " ";
        }
    }

    return 0;
}