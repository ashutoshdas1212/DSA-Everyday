Node *skipMdeleteN(Node *head, int M, int N)
{
    if (head == NULL || M == 0)
    {
        return NULL;
    }
    if (N == 0)
    {
        return head;
    }
    Node *temp = head;
    Node *tail = NULL;

    while (temp != NULL)
    {
        int m = 0;
        while (m <= M - 1 && temp != NULL)
        {
            if (tail != NULL)
            {
                tail->next = temp;
                tail = tail->next;
            }
            else
            {
                tail = head;
            }

            temp = temp->next;

            m++;
        }

        int n = 0;
        while (n <= N - 1 && temp != NULL)
        {
            temp = temp->next;
            n++;
        }

    }
   if(tail!=NULL)
   {
 tail->next=NULL;
   }

   
    
    return head;
}