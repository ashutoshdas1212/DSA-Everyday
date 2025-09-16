#include <bits/stdc++.h>
void zigZagOrder(BinaryTreeNode<int> *root)

{
    int cnt = 1;
    stack<BinaryTreeNode<int> *> s;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
    q.push(blank);

    while (!q.empty() )
    {

        BinaryTreeNode<int> *front = q.front();

        q.pop();

        if (front->data == -1)
        {
            cnt += 1;
           
                while (!s.empty())
                {
                    cout << s.top()->data << " ";
                    s.pop();
                }
            
            cout << endl;
            if (!q.empty())
            {
                BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
                q.push(blank);
            }
        }
        else
        {
            if (cnt % 2 == 1)
            {
                cout << front->data << " ";
            }
            else
            {
                s.push(front);
            }

            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}


#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    zigZagOrder(root);
}