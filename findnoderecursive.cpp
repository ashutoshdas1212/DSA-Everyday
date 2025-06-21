int find(Node *head, int n, int cnt)
{
    if (head->data == n)
    {
        return cnt;
    }
    int x = -1;
    x = find(head->next, n, cnt++);
    return x;
}
int findNodeRec(Node *head, int n)
{
    if (head == NULL)
    {
        return -1;
    }
    if(head->data==n)
    {
        return 0;
    }
    int cnt = 0;
   return find(head,n,cnt);
}