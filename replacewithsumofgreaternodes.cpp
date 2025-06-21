#include <bits/stdc++.h>
using namespace std;

void fill(BinaryTreeNode<int> *root, vector<int> v1)
{
    if (root == NULL)
    {
        return;
    }
    v1.push_back(root->data);

    fill(root->left, v1);
    fill(root->right, v1);
    return;
}
void find(BinaryTreeNode<int> *root, vector<int> v1,vector<int> v2,BinaryTreeNode<int> *roottop,int idx)
{
    if(idx==v1.size()|| root==NULL)
    {
        return;
    }

    if(v1[idx]==root->data)
    {
        root->data=v2[idx];
        find(roottop,v1,v2,roottop,idx+1);
        return;
    }
find(root->left,v1,v2,roottop,idx);
find(root->right,v1,v2,roottop,idx);
return;
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
        return;
    }
    vector<int> v1;
    vector<int> v2;

    fill(root, v1);

    sort(v1.begin(), v1.end());
    v2.push_back(v1[v1.size() - 1]);
    for (int i = v1.size() - 2; i >= 0; i--)
    {
        v2[i] = v1[i] + v1[i + 1];
    }
    sort(v2.begin(), v2.end(), greater<int>());

    find(root,v1,v2,root,0);
}