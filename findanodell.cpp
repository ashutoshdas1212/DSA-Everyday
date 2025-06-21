int find(Node *head, int n, int i)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == n)
    {
        return i;
    }

    return find(head->next, n, ++i);
}
int findNodeRec(Node *head, int n)
{

    return find(head, n, 0);
}