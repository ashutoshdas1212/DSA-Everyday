#include <bits/stdc++.h>
using namespace std;

Node *swapNodes(Node *head, int I, int J)
{   
  
    Node *temp = head;
    int cnt = 0;
    Node *prev1 = NULL;
    Node *prev2 = NULL;
    Node *n1 = NULL;
    Node *n2 = NULL;
    Node *nxt2 = NULL;
  int i=min(I,J);
  int j=max(I,J);

    if(i==j)
    {
        return head;
    }
    while (temp != NULL)
    {
        if (cnt == i)
        {
            n1 = temp;
        }
        if (cnt == j)
        {
            n2 = temp;
            nxt2 = n2->next;
        }
        if (cnt == i - 1)
        {
            prev1 = temp;
        }
        if (cnt == j - 1)
        {
            prev2 = temp;
        }

        temp = temp->next;
        cnt++;
    }

    if (prev1 != NULL)
    {
        prev1->next = n2;
    }
    else
    {
        head = n2;
    }

    if (abs(i - j) > 1)
    {
        n2->next = n1->next;
    }
    else
    {
        n2->next = n1;
    }

    if (abs(i - j) > 1)
    {
        prev2->next = n1;
    }
    n1->next = nxt2;

    return head;
}