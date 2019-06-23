Node* reverseList(Node *head)
{
  // Your code here
  Node *current=head;
  Node *prev=NULL, *next=NULL;
  while(current !=NULL)
  {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
  }
  head=prev;
}

