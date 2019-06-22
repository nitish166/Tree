int getNthFromLast(Node *head, int n)
{
       // Your code here
    Node *ptr1 = head;
    Node *ptr2 = head;
    while(n > 0)
    {
        if(n != 0 && ptr1 == NULL)
            return -1;
        ptr1 = ptr1->next;
        n--;
    }
    
    while(ptr1 != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr2->data;
}

