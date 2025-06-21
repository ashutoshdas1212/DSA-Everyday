Node *evenAfterOdd(Node *head)
{
    if(head==NULL)
    {
        return head;
    }

    Node *temp = head;
    Node *tail = NULL;
    Node *hodd = NULL;
    Node *heven = NULL;
    Node *todd = NULL;
    Node *teven = NULL;

    while (temp->next != NULL)
    {
        if (temp->data % 2 != 0)
        {
            if (hodd != NULL)
            {
                Node *newNodeo = new Node(temp->data);
                todd->next = newNodeo;
                todd = todd->next;
            }
            else
            {
                Node *newNode = new Node(temp->data);
                hodd = newNode;
                todd = newNode;
            }
        }

        temp = temp->next;
    }
    temp = head;

    while (temp->next != NULL)
    {
        if (temp->data % 2 == 0)
        {
            if (heven != NULL)
            {
                Node *newNodee = new Node(temp->data);
                teven->next = newNodee;
                teven = teven->next;
            }
            else
            {
                Node *newNode = new Node(temp->data);
                heven = newNode;
                teven = newNode;
            }
        }

        temp = temp->next;
    }
    if (todd == NULL)
    {
        return heven;
    }
    else
    {
        todd->next=heven;
        return hodd;
    }
}