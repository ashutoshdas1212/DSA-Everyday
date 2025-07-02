vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
    q.push(blank);

    vector<Node<int> *> v;
    Node<int> *n = NULL;
    Node<int> *head = NULL;
    while (!q.empty() && q.size() != 1)
    {
        BinaryTreeNode<int> *front = q.front();
        q.pop();
        if (front->data == -1)
        {
            n->next=NULL;
            v.push_back(n);
            n = NULL;
            head=NULL;
            BinaryTreeNode<int> *blank = new BinaryTreeNode<int>(-1);
            q.push(blank);
        }
        else
        {
            if (n == NULL)
            {
                n = new Node<int>(front->data);
                head=n;
            }
            else
            {
                n->next = new Node<int>(front->data);
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