#include <bits/stdc++.h> 
bool checking_special(BinaryTreeNode<int>* root)
{
    if(root==nullptr) return true;

    if(root->left && !root->right || !root->left && root->right)
        return false;

    bool l = checking_special(root->left);
    bool r = checking_special(root->right);

    return l&&r;

}
bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    bool special = checking_special(root);
    return special;
}