void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right != NULL)
    {
        cout << root->right->data << " ";
    }
    else if (root->left != NULL && root->right == NULL)
    {
        cout << root->left-> data << " ";
    }

    if (root->left != NULL)
    {
        printNodesWithoutSibling(root->left);
    }

    if (root->right != NULL)
    {
        printNodesWithoutSibling(root->right);
    }
}