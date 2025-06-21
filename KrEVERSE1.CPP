Node *kReverse(Node *head, int K)
{
    if (K == 0 || K == 1 || head == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    Node *nxt=curr;
    int i = 0;
    while (curr != NULL && i < k)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
        i++;
    }
        head->next=kReverse(nxt,K);
        return prev;
}