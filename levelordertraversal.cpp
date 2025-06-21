void printLevelWise(BinaryTreeNode<int> *root)
{

    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    cout << root->data << endl;

    while (!q.empty())
    {
        BinaryTreeNode<int> *n = q.front();
        if (n->left != NULL)
        {
            cout << n->left->data << " ";
            q.push(n->left);
        }
        if (n->right != NULL)
        {
            cout << n->right->data;
            q.push(n->right);
        }

        cout << endl;
        q.pop();
    }
    return;
}