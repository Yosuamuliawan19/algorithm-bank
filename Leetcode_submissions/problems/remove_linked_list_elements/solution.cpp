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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return head;
        while (head != nullptr && head->val == val){
            head = head->next;
        }
        ListNode* ans = head;
        ListNode* prev = head;
        if (head != nullptr)
        head = head->next;
        
        while (head != nullptr){
            while (head != nullptr && head->val == val){
                head = head->next;
            }
            prev->next = head;
            prev = prev->next;
            
            if (head != nullptr)
            head = head->next;
        }
        
        
        return ans;
    }
};