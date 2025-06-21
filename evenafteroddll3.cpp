Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *ohead = NULL;
    Node *ehead = NULL;
    Node *otail = NULL;
    Node *etail = NULL;
    while (temp->next != NULL)
    {
        if (temp->data % 2 != 0)
        {
            if (ohead != NULL)
            {
                otail->next = temp;
                otail = otail->next;
            }
            else
            {
                ohead = temp;
                otail = temp;
            }
        }
        else
        {
            if (ehead != NULL)
            {
                etail->next = temp;
                etail = etail->next;
            }
            else
            {
                ehead = temp;
                etail = temp;
            }
        }

        temp = temp->next;
    }

    if (ohead == NULL)
    {
        return ehead;
    }
    else
    {
        if (ehead == NULL)
        {
            return ohead;
        }
        otail->next = ehead;
        etail->next=NULL;
    }


    return ohead;
}