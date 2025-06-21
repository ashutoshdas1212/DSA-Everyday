int length(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

Node *bubbleSort(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    int n = length(head);
    Node *prev1 = NULL;

    for (int i = 0; i < n - 1; i++)
    {
        prev1 = NULL;
        temp = head;
        for (int j = 0; j < n - i - 1; j++)
        {

            if (temp->next != NULL && temp->data > temp->next->data)
            {

               
                Node *nxt = temp->next->next;
                if (prev1 != NULL)
                {
                    prev1->next = temp->next;
                }
                else{
                    head=temp->next;
                }

                temp->next->next = temp;
                temp->next = nxt;


                prev1 = temp;
                
            }
            else{
                 prev1 = temp;
                temp = temp->next;
            }
        }
    }
    return head;
}