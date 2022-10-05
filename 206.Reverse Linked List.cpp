if(head==NULL || head->next==NULL)
       {
          return head;
       }
        ListNode* n=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return n;
