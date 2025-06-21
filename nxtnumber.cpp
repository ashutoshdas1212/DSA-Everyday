Node *rev(Node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }
    Node *nxtNode = rev(head->next);
    head->next->next = head;
    head->next = NULL;

    return nxtNode;
}
int c = 0;

Node *largenum(Node *head)
{
    if (head == NULL)
    {
        if (c == 1)
        {
            Node *newNode = new Node(1);
            newNode->next = NULL;

            return newNode;
        }
        else if (c == 0)
        {
            return head;
        }
    }

    head->data += c;
    if (head->data == 10)
    {
        head->data = 0;
        c = 1;
    }
    else
    {
        c = 0;
    }
    head->next = largenum(head->next);
    return head;
}
Node *NextLargeNumber(Node *head)
{
    head = rev(head);
    head->data += 1;

    head = largenum(head);
    head = rev(head);
    return head;
}