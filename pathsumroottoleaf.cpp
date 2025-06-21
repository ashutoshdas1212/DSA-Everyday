void path(BinaryTreeNode<int> *root, int k, int sum, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL && sum == k)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        return;
    }

    path(root->left, k, sum, v);
    path(root->right, k, sum, v);
    v.push_back(root->data);
    path(root->left, k, sum + root->data, v);
    path(root->right, k, sum + root->data, v);
    return;
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    vector<int> v;
    path(root, k, 0, v);
}