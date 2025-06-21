vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    vector<Node<int> *> v;
    if (root == NULL)
    {
        return v;
    }

    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    Node<int> *head = NULL;
    Node<int> *tail = NULL;
    while (!q.empty())
    {
        BinaryTreeNode<int> *frontNode = q.front();
        q.pop();
        if (frontNode != NULL)
        {
            Node<int> *newNode = new Node<int>(frontNode->data);
            if (frontNode->left != NULL)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right != NULL)
            {
                q.push(frontNode->right);
            }

            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        else
        {
            v.push_back(head);
            head = NULL;
            tail = NULL;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
    return v;
}