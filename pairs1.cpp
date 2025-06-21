#include <bits/stdc++.h>

void pairs(BinaryTreeNode<int> *root, int sum, int rem, vector<int> v)
{

    if (root == NULL)
    {
        return;
    }

    if (sum == rem)
    {

        vector<int> v1;
        v1.push_back(root->data);
        pairs(root->left, sum, rem - root->data, v1);
        pairs(root->right, sum, rem - root->data, v1);
    }
    else
    {
        if (root->data == rem)
        {
            v.push_back(root->data);
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout<<endl;
            return;
        }
        else
        {
            pairs(root->left, sum, rem - root->data, v);
            pairs(root->right, sum, rem - root->data, v);
        }
    }
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{

    vector<int> v;
    pairs(root, sum, sum, v);
}
// IF SUM==REM YES: //PASSED ROOT DATA BY VECTOR PUSH, REM SUBSTRACT//NO:// NOT PASSED ROOT DATA

// CHECK ROOT->DATA===REM IF YES:V.PUSH_BACK ELSE:________
// CALL ROOT->LEFT,CALL ROOT->RIGHT
