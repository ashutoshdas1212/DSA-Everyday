Node *evenAfterOdd(Node *head) {
    if (head == NULL) {
        return head;
    }

    Node *oddHead = NULL, *oddTail = NULL;
    Node *evenHead = NULL, *evenTail = NULL;
    Node *current = head;

    // Traverse the list and separate nodes into odd and even lists
    while (current != NULL) {
        if (current->data % 2 != 0) {  // Odd node
            if (oddHead == NULL) {
                oddHead = oddTail = current;
            } else {
                oddTail->next = current;
                oddTail = oddTail->next;
            }
        } else {  // Even node
            if (evenHead == NULL) {
                evenHead = evenTail = current;
            } else {
                evenTail->next = current;
                evenTail = evenTail->next;
            }
        }
        current = current->next;
    }

    // If there are no odd nodes, just return the even list
    if (oddHead == NULL) {
        return evenHead;
    }

    // Link the odd list to the even list
    oddTail->next = evenHead;

    // Terminate the even list
    if (evenTail != NULL) {
        evenTail->next = NULL;
    }

    return oddHead;
}
