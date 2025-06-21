
Node *deleteNode(Node *head, int pos)
{
    Node *prev = head;
    Node *temp = head;
    if (head == NULL)
    {
        return head;
    }
    if (pos == 0)
    {
        return head->next;
    }

    while (temp != NULL)
    {
        if (pos == 0)
        {
            prev->next = temp->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
        pos--;
    }
    return head;
}