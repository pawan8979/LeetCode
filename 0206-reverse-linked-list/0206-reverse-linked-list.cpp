class Solution {

public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        else
        {
            ListNode *current=head;
            ListNode *prev=NULL;
            ListNode *next=NULL;
            
            while(current!=NULL)
            {
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
            head=prev;
        }
        return head;
    }
};