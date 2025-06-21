void printLevelWise(BinaryTreeNode<int> *root)
{

    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        BinaryTreeNode<int> *front = q.front();

        if (front == NULL)
        {
            cout << "\n";
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
                
            }
        }
        else
        {
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }

            q.pop();
        }
    }

    return;
}