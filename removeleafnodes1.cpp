BinaryTreeNode<int> *removeLeafNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return NULL;
    }
    root->right = removeLeafNodes(root->right);
    root->left = removeLeafNodes(root->left);
}