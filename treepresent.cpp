

bool isPresent(TreeNode<int> *root, int x) {

    if(root==NULL)
    {
        return false;
    }
    if(root->data==x)
    {
        return true;
    }

  

    return isPresent(root->left,x)||isPresent(root->left,x);


}