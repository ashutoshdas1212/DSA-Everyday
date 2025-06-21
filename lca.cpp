#include <bits/stdc++.h>
using namespace std;

bool get(BinaryTreeNode<int> *root, int a, int b)
{

    if (root->data == a || root->data == b)
    {
        return true;
    }
    if (root == NULL)
    {
        return false;
    }
    return get(root->left, a, b) || get(root->right, a, b);
}
bool get1(BinaryTreeNode<int> *root, int x)
{

    if (root->data == x)
    {
        return true;
    }
    if (root == NULL)
    {
        return false;
    }
    return get1(root->left, x) || get1(root->right, x);
}
int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == a)
    {
        if (get1(root, b))
        {
            return a;
        }
    }
    else if (root->data == b)
    {
        if (get1(root, a))
        {
            return b;
        }
    }
    else if (get(root->left, a, b) && get(root->right,  a,  b))
    {
        return root->data;
    }
    return max(getLCA(root->left, a, b),getLCA(root->right, a, b));
    
}


// common ancestor
// each node is descendant to iteself

// check left and right - both true lca
// if n finds complement->n on left or right,ans is n
