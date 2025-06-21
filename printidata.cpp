int ll(Node *head)
{
    int n = 0;
    while (head!=NULL)
    {
        head = head->next;
        n++;
    }
    return n;
}
void printIthNode(Node *head, int i)
{
    Node *temp=head;
    int length = ll(temp);
    if (i > length)
    {
        return;
    }

    
    while (head != NULL)
    {

        if (i == 0)
        {
            cout << head->data;
            return;
        }
        head = head->next;
        i--;
    }
    return;
}