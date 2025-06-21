
void insertDuplicateNode(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    bool flag = false;
    BinaryTreeNode<int> *newroot = new BinaryTreeNode<int>(root->data);
    if (root->left == NULL)
    {
        root->left = newroot;
    }
    else
    {
        BinaryTreeNode<int> *prev = root->left;
        root->left = newroot;
        newroot->left = prev;
        flag = true;
    }

    if (flag)
    {
        insertDuplicateNode(prev);
    }
 

    insertDuplicateNode(root->right);

    return;
}