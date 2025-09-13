void zigZagOrder(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
    q.push(blank);

    while (!q.empty() && q.size() != 1)
    {

        BinaryTreeNode<int> *front = q.front();

        q.pop();

        if (front->data == -1)
        {

            cout << endl;
            BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
            q.push(blank);
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
        }
    }
}