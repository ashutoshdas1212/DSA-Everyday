Node *rec(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }

    if (pos == 0)
    {
        Node *a = head->next;
        delete head;
        return a;
    }

    head->next = rec(head->next, --pos);
    return head;
}

Node *deleteNodeRec(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }

    if (pos == 0)
    {
        Node *a = head->next;
        delete head;
        return a;
    }

    return rec(head, pos);
}