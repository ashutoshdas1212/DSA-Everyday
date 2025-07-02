void printLevelWise(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    cout << root->data << endl;
    BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
    q.push(blank);

    while (!q.empty())
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
        {cout<<front->data<<" ";
            q.push(front->left);
            q.push(front->right);
        }
    }
}