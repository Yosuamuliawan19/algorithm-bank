/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* cur = head->next;
        ListNode* prev = head;
        set<int> st;
        while (cur != nullptr){
            if (cur->val == prev->val){
                st.insert(cur->val);
            }
            prev = prev->next;
            cur = cur->next;
        }
        
        
        ListNode* ans = new ListNode();
        ListNode* anshead = ans;
        cur = head;
        while (cur != nullptr){
            if (st.find(cur->val) == st.end()){
                cout << cur->val <<endl;
                ans->next = new ListNode(cur->val);
                ans = ans->next;
            }
            cur = cur->next;
        }
       
        return anshead->next;
    }
};