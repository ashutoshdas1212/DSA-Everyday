int ll(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return 1 + ll(head->next);
}
Node *bubbleSort(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    int i = 0;
    int len = ll(head);
    Node *curr = head;
    Node *prev = NULL;
    Node *a = NULL;
    Node *b = NULL;
    for (int i = 0; i < len; i++)
    {
        curr = head;
        prev = NULL;
        while (curr->next != NULL)
        {
            if (curr->data > curr->next->data)
            {
                if (prev != NULL)
                {
                    Node *a = curr->next->next;
                    Node *b = curr->next;
                    prev->next = b;
                    b->next = curr;
                    curr->next = a;
                    prev = b;
                }
                else
                {
                    Node *a = curr->next->next;
                    Node *b = curr->next;
                    head = b;
                    b->next=curr;
                    curr->next=a;
                    prev=b;
                }
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }

    return head;
}