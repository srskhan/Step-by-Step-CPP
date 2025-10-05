int mx=0;
int max_height(TreeNode<int> *root)
{
    if(root == nullptr) 
        return 0;

    if(root->left == nullptr && root->right == nullptr) 
        return 1;

    int l = max_height(root->left);
    int r = max_height(root->right);
    int d = l+r;
    mx = max(mx,d);
    return max(l,r)+1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
	max_height(root);
    return mx;
}