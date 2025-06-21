Node *swapNodes(Node *head, int i, int j)
{
    if (i == j)
    {
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev1 = NULL;
    Node *prev2 = NULL;
    Node *n1 = NULL;
    Node *n2 = NULL;

    while (temp != NULL)
    {
        if (cnt == i)
        {
            prev1 = prev;
            n1 = temp;
        }
        if (cnt == j)
        {
            prev2 = prev;
            n2 = temp;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    if(prev1!=NULL)
    {
        prev1->next=n2;
    }
    else
    {
        head=n2;
    }
    if(prev2!=NULL)
    {
        prev2->next=n1;
    }
    else{
        head=n1;
    }
    Node *nxt=n2->next;
    n2->next=n1->next;
    n1->next=nxt;
    return head;
}