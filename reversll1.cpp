Node *reversehead(Node *head)
{
    if(head==NULL || head->next=NULL)
    {
        return head;
    }
    newhead=reversehead(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}