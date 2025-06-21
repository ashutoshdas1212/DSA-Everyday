BinaryTreeNode<int> *get(BinaryTreeNode<int> *root, int a, int b)
{
    if ( root == NULL || root->data == a || root->data == b )
    {
        return root;
    }

    BinaryTreeNode<int> *left = get(root->left, a, b);
    BinaryTreeNode<int> *right = get(root->right, a, b);

    if (left  && right )
    {
        return root;
    }

    else if (left )
    {
        return left;
    }

    return right;
}

int getLCA(BinaryTreeNode<int> *root, int a, int b)
{

    BinaryTreeNode<int> *res = get(root, a, b);
    if (res == NULL)
    {
        return -1;
    }

    return res->data;
}