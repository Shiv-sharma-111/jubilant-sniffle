//Write a function detectAndRemoveLoop() that checks whether a given Linked List
// contains loop and if loop is present then removes the loop and returns true
void removeLoop(struct Node* slow, struct Node* head)
{
  // Function to remove loop.
  struct Node* ptr1, *ptr2;
  ptr1 = head;
  while(1)
  {
    ptr2 = slow;
    while(ptr2->next!=slow && ptr2->next!=ptr1)
    {
      ptr2 = ptr2->next;
    }
    if(ptr2->next = ptr1)
    {
      break;
    }
    ptr1 = ptr1->next;
  }
  ptr2->next = NULL;
}
int detectAndRemoveLoop(struct Node* head)
{
  struct Node* slow = head, *fast = head;
  while(fast!=NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next;
    if(slow==fast)
    {
      removeLoop(slow, head);
      return 1;
    }
  }
  slow
}

     //
     // 1--->2--->3
     //      |    |
     //      |    |
     //      5---4
