Node *reverse(Node *head)
{
    Node *ptr=head;
    while(ptr->next)
    {
        head=reverse(head->next);
        ptr->next->next=ptr;
        ptr->next=NULL;

    }
    return head;

}
Node* NextLargeNumber(Node *head) {
head=reverse(head);
int carry=1;
Node *ptr=head;

  Node *prev=ptr;
 while(ptr)
 {  
      int num=((ptr->data+carry)%10);
      carry=((ptr->data+carry)/10);
      ptr->data=num;
      prev=ptr;
      ptr=ptr->next;

 }
 if(carry)
 {
    Node *tail=new Node(carry);
    prev->next=tail;
 }

 head=reverse(head);

 return head;
    
}


