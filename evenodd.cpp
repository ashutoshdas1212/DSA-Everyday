Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *todd = NULL;
    Node *teven = NULL;
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 != 0 && todd == NULL)
        {
            todd = temp;
            head1 = temp;
            tail1 = temp;
        }
        if (temp->data % 2 == 0 && teven == NULL)
        {
            teven = temp;
            head2 = temp;
            tail2 = temp;
        }
        temp = temp->next;
    }

    while (todd != NULL)
    {
        todd = todd->next;
        if (todd->next == NULL)
        {
            break;
        }
        if (todd->data % 2 != 0)
        {
            tail1->next = todd;
            tail1 = tail1->next;
        }
    }
    tail1->next = NULL;
    while (teven != NULL)
    {
        teven = teven->next;
        if (teven->next == NULL)
        {
            break;
        }
        if (teven->data % 2 != 0)
        {
            tail2->next = teven;
            tail2 = tail2->next;
        }
    }
    tail2->next = NULL;
    tail1->next = head2;

    return head1;
}