#include <bits/stdc++.h> 

void left_view(TreeNode<int>* root, vector<int> &ans, int level)
{
    if(root == nullptr)
        return;

    if(level == ans.size())
    {
        ans.push_back(root->data);
    }

    left_view(root->left, ans, level+1);
    left_view(root->right, ans, level+1);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    left_view(root, ans, 0);
    
    return ans;
}