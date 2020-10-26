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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* prev = new ListNode(0, nullptr);
        ListNode* ans = new ListNode(0, prev);
        
        while (l1 != nullptr && l2 != nullptr){
            if (l1->val < l2->val){
                 ListNode* cur = new ListNode(l1->val, nullptr);
                 prev->next = cur;
                prev = cur;
                l1 = l1->next;
            }else{
                 ListNode* cur = new ListNode(l2->val, nullptr);   
                 prev->next = cur;
                prev = cur;
                l2 = l2->next;
            }
        }
        
        
        while (l1 != nullptr){
            ListNode* cur = new ListNode(l1->val, nullptr);
            prev->next = cur;
            prev = cur;
            l1 = l1->next;
        }
        
        while (l2 != nullptr){
            ListNode* cur = new ListNode(l2->val, nullptr);
            prev->next = cur;
            prev = cur;
            l2 = l2->next;
        }
        return ans->next->next;
    }
};