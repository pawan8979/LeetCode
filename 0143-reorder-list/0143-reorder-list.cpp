class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *q1=head,*q2=head;
        queue<int>q;
        // q.push(q1->val);
        while(q2 && q2->next){
            q.push(q1->val);
            q1=q1->next;
            q2=q2->next->next;
        }
        stack<int>st;
        while(q1){
            st.push(q1->val);
            q1=q1->next;
        }
        q1=head;
        while(q1){
            if(!q.empty()) {
                q1->val=q.front();
                q.pop();
                q1=q1->next;
            }
            if(!st.empty()){
                q1->val=st.top();
                st.pop();
                q1=q1->next;
            }
        }
    }
};