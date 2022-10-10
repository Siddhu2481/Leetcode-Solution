if(head==NULL || head->next==NULL)
        {
            return false;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
