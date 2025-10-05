#include <bits/stdc++.h> 

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    queue<BinaryTreeNode<int>* > q;
    if(root!= nullptr)
        q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int>* f = q.front();
        q.pop();

        ans.push_back(f->val);

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }

    return ans; 
}