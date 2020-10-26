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
    ListNode* swapPairs(ListNode* head) {
        ListNode* cur = new ListNode(0, nullptr);
        ListNode* start = new ListNode(0, cur);
    
        while (head != nullptr){            
            ListNode* a = new ListNode(head->val, nullptr);

            head = head->next;
            if (head == nullptr) {
                cur->next = a;
                cur = cur->next;
                
                cout <<"a "<< a->val << endl;
                break;
            }
            
            ListNode* b = new ListNode(head->val, a);
            head = head->next;
            
            
            cur->next = b;
            cur = cur->next->next;
            
            
            cout << "b "<<  b->val << endl;
            cout <<"a "<< a->val << endl;
                        
        }
        return start->next->next;
    }
};