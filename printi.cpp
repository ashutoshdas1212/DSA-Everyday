void printIthNode(Node *head, int i)
{

    Node *temp = head;
    while (temp != NULL && i != 0)
    {
        if (i == 0)
        {
            cout << head->data << " ";
            return;
        }
        i--;
    }
    return;
}