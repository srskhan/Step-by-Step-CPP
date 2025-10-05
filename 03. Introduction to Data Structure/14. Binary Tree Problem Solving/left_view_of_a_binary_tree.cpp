#include <bits/stdc++.h> 

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> v;
    bool freq[3001] = {false};
    queue<pair<TreeNode<int>* ,int>> q;

    if(root)
        q.push({root,1});
    
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> parent = q.front();
        q.pop();
        
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        if(freq[level] == false){
            v.push_back(node->data);
            freq[level] = true;
        }

        if(node->left)
            q.push({node->left, level+1});
        if(node->right)
            q.push({node->right, level+1});
    }
    return v;
}