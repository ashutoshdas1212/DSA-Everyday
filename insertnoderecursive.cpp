Node *insert(Node *head, int pos, Node *newNode)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    if (pos == 0)
    {
        newNode->next = temp;
		 temp->next = insert(temp->next, --pos, newNode);
		 return newNode;
    }
    else{
    temp->next = insert(temp->next, --pos, newNode);

        return temp;
    }

   
}

Node *InsertNode(Node *head, int pos, Node *newNode)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (pos == 0)
    {
        newNode->next = head;
        return newNode;
    }

     head->next=insert(head->next, --pos, newNode);
	 return head;
}