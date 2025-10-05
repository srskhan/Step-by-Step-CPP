#include <bits/stdc++.h> 

int det_node(TreeNode<int>* root,int level,int searchedValue)
{
    if(root == NULL){
        return 0;
    }

    if(root->val == searchedValue)
        return level;

    int l = det_node(root->left,level+1,searchedValue);
    int r = det_node(root->right,level+1,searchedValue);

    if(l!= 0)
        return l;
    else if(r!= 0)
        return r;
    else 
        return 0;

}
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    int level = 1;
    int lvl = det_node(root, level, searchedValue);
    return lvl; 
}
