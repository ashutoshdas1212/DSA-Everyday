#include <bits/stdc++.h>

Node *swapNodes(Node *head, int I, int J)
{
    int i=I,j=J;
    if (i == j || head == NULL)
    {
        return head;
    }

    Node *temp = head;
    Node *n1 = NULL, *n2 = NULL;
    Node *prev = NULL, *prev1 = NULL, *prev2 = NULL;

    while (temp != NULL)
    {

        i--;
        j--;

        if (i == 0)
        {
            prev1 = prev;
            n1 = temp;
        }

        if (j == 0)
        {
            prev2 = prev;
            n2 = temp;
        }
        prev = temp;
        temp = temp->next;
    }
    Node *a=NULL;
    Node *b=NULL;
    if(abs(j-i)==1)
    {
        if(i!=0)
        {
         prev1->next=n2;
        }
        b=n2->next;
        n2->next=n1;
        n1->next=b;

    }
    else
    {
        if(i!=0)
        {
            prev1->next=n2;
        }
        a=n1->next;
        n2->next=a;
        prev2->next=n1;
        b=n2->next;
        n1->next=b;
    }
}