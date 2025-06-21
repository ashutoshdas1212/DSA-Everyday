#include <bits/stdc++.h>
using namespace std;
void zigZagOrder(BinaryTreeNode<int> *root)
{
      if (root == NULL) {
        return; // Handle empty tree case
    }

    stack<BinaryTreeNode<int> *> st1;
    stack<BinaryTreeNode<int> *> st2;
    st1.push(root);
   // cout << root->data << "\n";

    while (!st1.empty() || !st2.empty())
    {
        while (!st1.empty())
        {
            BinaryTreeNode<int> *treenode1 = st1.top();
            cout<<treenode1->data<<" ";
            if (!st1.empty())
            {
                st1.pop();
            }

               if (treenode1->left != NULL)
            {
                st2.push(treenode1->left);
              //  cout << treenode1->left->data;
            }

            if (treenode1->right != NULL)
            {
                st2.push(treenode1->right);
               // cout << treenode1->right->data << " ";
            }
         
        }
        cout << "\n";
        while (!st2.empty())
        {
            BinaryTreeNode<int> *treenode2 = st2.top();
             cout<<treenode2->data<<" ";

            if (!st2.empty())
            {
                st2.pop();
            }
               if (treenode2->right != NULL)
            {
                st1.push(treenode2->right);
               // cout << treenode2->right->data;
            }
            if (treenode2->left != NULL)
            {
                st1.push(treenode2->left);
               // cout << treenode2->left->data << " ";
            }
         
        }
        cout << "\n";
    }
}