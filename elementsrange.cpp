#include <bits/stdc++.h>
#include <vector>
void elements(BinaryTreeNode<int> *root, int k1, int k2, vector<int> v)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data >= k1 && root->data <= k2)
    {

        v.push_back(root->data);

        if (root->left != NULL)
        {
            elements(root->left, k1, k2, v);
        }
        if (root->right != NULL)
        {
            elements(root->right, k1, k2, v);
        }
    }
    else if (root->data < k1 && root->data < k2)
    {
        if (root->right != NULL)
        {
            elements(root->right, k1, k2, v);
        }
    }
    else if (root->data > k1 && root->data > k2)
    {
        if (root->left != NULL)
        {
            elements(root->left, k1, k2, v);
        }
    }
    return;
}

void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2)
{

    vector<int> v;
    elements(root, k1, k2, v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}