/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    set<ListNode*> st;
    bool hasCycle(ListNode *head) {
        while (head != nullptr){
            if (st.find(head) != st.end()) return 1;
            st.insert(head);
            head = head->next;
        }
        return 0;
    }
};