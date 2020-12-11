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

// n + 1, n, n-1
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int idx = 1;
        ListNode* a,*b,*c;
        ListNode* cur = head;
        while (cur != nullptr){
            // printf("\nidx = %d, val = %d\n", idx, cur->val);
            if (idx == n){
                b = head;
                c = head->next;
                // printf("target found\n");
                // printf("b = %d, c = %d\n", b->val, c->val);
            }else if (idx > n){
                a = b;
                b = c;
                c = c->next;
                // printf("a = %d, b = %d, c = %d\n", a->val, b->val, c->val);
            }
            cur = cur->next;
            idx++;
        }
        if (b == head){
            head = c;
        }else{
            a->next = c;
        }

        return head;
    }
};