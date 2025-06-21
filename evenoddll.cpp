Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *evenh = NULL;
    Node *event = NULL;
    Node *oddh = NULL;
    Node *oddt = NULL;
    Node *temp = head;

    while (temp != NULL)
    {
        if (evenh == NULL && temp->data % 2 == 0)
        {
            evenh = temp;
            event = temp;
        }
        if (oddh == NULL && temp->data % 2 != 0)
        {
            oddh = temp;
            oddt = temp;
        }
        temp = temp->next;
    }
    head = head->next;
    while (head != NULL)
    {
        if (head->data % 2 != 0 && head!=oddh)
        {
            oddt->next = head;
            oddt = oddt->next;
        }

        if (head->data % 2 == 0 && head!=evenh)
        {
            event->next = head;
            event = event->next;
        }
        head=head->next;
    }
    if(oddh==NULL)
    {
        event->next=NULL;
        return evenh;
    }

    if(evenh==NULL)
    {
        oddt->next=NULL;
        return oddh;
    }
    oddt->next=evenh;
    event->next=NULL;
    return oddh;
}