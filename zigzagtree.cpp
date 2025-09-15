void zigZagOrder(BinaryTreeNode<int> *root)

{
    int cnt = 1;
    stack<BinaryTreeNode<int> *> s;
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
            cnt += 1;
            if (!s.empty())
            {
                while (!s.empty())
                {
                    cout << s.top()->data << " ";
                    s.pop();
                }
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


