
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) 
        return false;

    if(root->data == x)
    {
        return true;
    }
    bool leftcheck = isNodePresent(root->left,x);
    bool rightcheck = isNodePresent(root->right,x);

    return leftcheck||rightcheck;
}