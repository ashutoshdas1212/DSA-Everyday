BinaryTreeNode<int> *get(BinaryTreeNode<int> *root, int val1, int val2)
{
    if (root == NULL || root->data == val1 || root->data == val2)
    {
        return root;
    }
    if (val1 < root->data && val2 < root->data)
    {
        return get(root->left, val1, val2);
    }
    else if (val1 > root->data && val2 > root->data)
    {
        return get(root->right, val1, val2);
    }

    BinaryTreeNode<int> *left = get(root->left, val1, val2);
    BinaryTreeNode<int> *right = get(root->right, val1, val2);
    if (left != NULL && right != NULL)
    {
        return root;
    }
    if (left != NULL)
    {
        return left;
    }
    return right;
}

int getLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
    BinaryTreeNode<int> *res = get(root, val1, val2);
    if (res == NULL)
    {
        return -1;
    }

    return res->data;
}