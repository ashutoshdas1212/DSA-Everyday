Node *skipMdeleteN(Node *head, int M, int N)
{
    if (M == 0 || head==NULL)
    {
        return NULL;
    }
    Node *temp = head;
    Node *tail = head;

    while (temp != NULL)
    {
        int m = M;
        int n = N;
        while (m != 0 && temp != NULL)
        {
            if (temp != head)
            {
                tail->next = temp;
            }
            temp = temp->next;
            tail = tail->next;
            m--;
        }
        while (n != 0 && temp != NULL)
        {
            temp = temp->next;
            n--;
        }
    }
    tail->next = NULL;
    return head;
}