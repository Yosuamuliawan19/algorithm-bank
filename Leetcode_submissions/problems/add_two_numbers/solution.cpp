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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *prev = new ListNode(0);
        ans->next = prev;
        long long carry = 0;
        while (l1 != NULL || l2 != NULL){
            int a = 0, b = 0;
            if (l1 != NULL) {
                a = l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                b = l2->val;
                l2 = l2->next;
            }
            long long x = a + b + carry;
            carry = 0;
            if (x > 9){
                carry = x / 10;
                x = x % 10;
            }
            ListNode *cur = new ListNode(x);
            prev->next = cur;
            prev = cur;
        }
        if (carry > 0){
            ListNode *cur = new ListNode(carry);
            prev->next = cur;
            prev = cur;
        }
        
        return ans->next->next;
    }
};