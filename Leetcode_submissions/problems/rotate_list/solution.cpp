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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr) return head;
        ListNode* cur = head;
        int n = 0;
        while (cur != nullptr){
            cur = cur->next;
            n ++;
        }
        k = n - (k % n);
         
        
        
        ListNode* end, *mid;
        
        cur = head;
        int cnt = 0;
        while (cur != nullptr){
            end = cur;
            cnt++;
            if (cnt == k){
                mid = cur;
            }
            cur = cur->next;
        }
        
        end->next = head;
        head = mid->next;
        mid->next = nullptr;
        
        return head;
    }
};