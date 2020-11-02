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
    vector<ListNode> num1, num2;
    void trav(ListNode* node, vector<ListNode> & num){
        if (node == nullptr) return;
        num.push_back(*node);
        trav(node->next, num);
    } 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        trav(l1, num1);
        trav(l2, num2);
        int i = 0, j = 0;
        // for (auto i: num1) cout << i.val << endl;
        // cout << "edad\n";
        // for (auto i: num2) cout << i.val << endl;
        int carry = 0;
        vector<int> ans;
        while (i < num1.size()|| j < num2.size()){
            int cur = carry; carry = 0;
            if (i < num1.size() ) cur += num1[i++].val;
            if (j < num2.size()) cur += num2[j++].val;
            // cout << cur << endl;
            if (cur >= 10){
                cur -= 10;
                carry = 1;
            }
            ans.push_back(cur);
        }
        if (carry > 0) ans.push_back(carry);
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        // cout << "hey\n"; 
        for (int i=0; i < ans.size(); i++){
            // cout << ans[i] << endl;
            cur->next = new ListNode(ans[i]);
            cur = cur->next;
        }
        return head->next;
        
    }
};