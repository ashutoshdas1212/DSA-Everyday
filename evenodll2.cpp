
Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *ehead = NULL;
    Node *ohead = NULL;
    Node *etail = NULL;
    Node *otail = NULL;
    Node *tempO=NULL;
    Node *tempE=NULL;
    Node *todd=NULL;
    Node *teven=NULL;
   
    while (temp->next != NULL)
    {
        if (temp->data % 2 != 0 && ohead != NULL)
        {
            ohead = temp;
            otail = temp;
        }
        else if (temp->data % 2 == 0 && ehead != NULL)
        {
            ehead = temp;
            etail = temp;
        }
        temp = temp->next;
    }
    if (todd != NULL)
    {
        tempO = todd->next;
    }

    while (tempO->next != NULL)
    {
        if (tempO->data % 2 != 0)
        {
            otail->next = tempO;
            otail = otail->next;
        }

        tempO = tempO->next;
    }

    if (teven != NULL)
    {
        tempE = teven->next;
    }
    while (tempE->next != NULL)
    {
        if (tempE->data % 2 != 0)
        {
            otail->next = tempE;
            otail = otail->next;
        }

        tempE = tempE->next;
    }

    if (ohead == NULL)
    {
        return ehead;
    }
    else
    {
        if (ehead != NULL)
        {
            otail->next = ehead;
        }

        return ohead;
    }
}