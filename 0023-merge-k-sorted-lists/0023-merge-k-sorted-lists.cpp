class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        for (auto value : lists) {
            ListNode* curr = value;
            while (curr != nullptr) {
                ans.push_back(curr->val);
                curr = curr->next;
            }
        }
        sort(ans.begin(), ans.end());
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        for (int val : ans) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
        return dummy->next;
    }
};
