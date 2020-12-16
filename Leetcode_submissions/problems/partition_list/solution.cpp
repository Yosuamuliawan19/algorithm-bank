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
    ListNode* partition(ListNode* head, int x) {
        if (head == nullptr) return head;
        ListNode* before = new ListNode();
        ListNode* after = new ListNode();
        ListNode* a = before, *c = after;
        
        
        while (head != nullptr){
            cout << head->val << endl;
            if (head->val < x){
                before->next = head;
                head = head->next;
                before = before->next;
            }else{
                after->next = head;
                head = head->next;
                after = after->next;
            }
            
        }
        after->next = nullptr;
        before->next = c->next;
        
        return a->next; 
    }
};