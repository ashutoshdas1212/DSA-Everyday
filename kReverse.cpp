Node *kReverse(Node *head, int K)
{
    if (K == 0 || K == 1 || head == NULL)
    {
        return head;
    }
     Node *tail=head;
    int k = K;
    Node *curr = head;
    Node *prev = NULL;
    Node *nxt = head->next;
    Node *a = NULL;
    while (k != 0)
    {
        if (k == 1 || curr->next == NULL)
        {
            a = curr->next;
            head=curr;
        }
        curr->next = prev;
        if (k != 1)
        {
            prev = curr;
            curr = nxt;
            nxt = curr->next;
        }
        k--;
    }
   
    tail->next = kReverse(a, K);
    return head;
}