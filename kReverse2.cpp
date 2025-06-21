Node *reversehead(Node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    Node *newhead = reversehead(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

Node *kReverse(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    if (k == 0 || k == 1)
    {
        return head;
    }

    int i = 0;
    Node *temp = head;
   
    Node *prev = NULL;
    while (i < k && temp!=NULL)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = NULL;
 

    Node *reversedhead = reversehead(head);
    head->next = kReverse(temp, k);

    return reversedhead;
}