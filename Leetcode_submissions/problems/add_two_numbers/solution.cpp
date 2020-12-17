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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1, *b = l2, *c, *d;
        int carry = 0;
        
        while (a != nullptr && b != nullptr){
            c = a; d = b;
            carry += a->val + b->val;
            if (carry >= 10){
                a->val = (carry%10);
                b->val = (carry%10);
                carry /= 10;
            }else{
                a->val = carry;
                b->val = carry;
                carry = 0;
            }
            a = a->next;
            b = b->next;
        }
        bool f = 0;
        while (a != nullptr){
            c = a;
            f = 1;
            carry += a->val;
            if (carry >= 10){
                a->val = (carry%10);
                carry /= 10;
            }else{
                a->val = carry;
                carry = 0;
            }
            a = a->next;
        }
        
        while (b != nullptr){
            d = b;
            f = 0;
            carry += b->val;
            if (carry >= 10){
                b->val = (carry%10);
                carry /= 10;
            }else{
                b->val = carry;
                carry = 0;
            }
            b = b->next;
        }
        if (carry != 0){
            if (f){
                c->next = new ListNode(carry);
            }else{
                d->next = new ListNode(carry);
            }
        }
        
        return (f ? l1: l2);
        
    }
};