void deleteAlternateNodes(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    Node *a=head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->next->next == NULL)
        {
            temp->next = NULL;
            break;
        }
        a = temp->next->next;
        temp->next = a;
        temp = a;
    }

    return;
}