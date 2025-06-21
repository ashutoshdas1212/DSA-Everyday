#include <bits/stdc++.h>
using namespace std;


bool find(BinaryTreeNode<int> *root, int rem)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == rem)
    {
        return true;
    }

    return find(root->left, rem) || find(root->right, rem);
}
void helper(BinaryTreeNode<int> *root, int sum, BinaryTreeNode<int> *roothead)
{
    unordered_map<int,int> mp;
    vector<int> v;
    if (find(roothead, sum - root->data))
    {   
        if(!mp[root->data])
        {
             mp[root->data]=sum-root->data;
        mp[sum-root->data]=root->data;
        cout << root->data << " " << sum - root->data << endl;
        }
       
    }

    helper(root->left, sum, roothead);
    helper(root->right, sum, roothead);
    return;
}
void pairSum(BinaryTreeNode<int> *root, int sum)
{
    if (root == NULL)
    {
        return;
    }
    helper(root, sum, root);
}