void pairs(BinaryTreeNode<int> *root, int sum, vector<int> v)
{
    // int s = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     s += v[i];
    // }
      if (sum == 0 )
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if (root == NULL || sum < 0)
    {
        return;
    }
  

    pairs(root->left, sum, v);

    if (sum > 0)
    {
        v.push_back(root->data);
        pairs(root->left, sum - root->data, v);
    }

    pairs(root->right, sum, v);

    if (sum > 0)
    {
        v.push_back(root->data);
        pairs(root->left, sum - root->data, v);
    }
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{
    vector<int> v;
    pairs(root, sum, v);
}