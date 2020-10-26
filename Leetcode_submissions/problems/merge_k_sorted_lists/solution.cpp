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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* head = new ListNode(0, nullptr);
        ListNode* start = new ListNode(0, head);

        
       priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > pq;
        int len = lists.size(), endedAmount = 0;
        for (int i=0;i<len;i++){
            if (lists[i] != nullptr){
                pq.push(make_pair(lists[i]->val, i));
                lists[i] = lists[i]->next;
            }
            
        }
        while (!pq.empty()){
            pair<int,int> cur = pq.top(); pq.pop();
            ListNode* curNode = new ListNode(cur.first, nullptr);
            head->next = curNode;
            head = head->next;
            // cout << cur.first << " " << cur.second << endl;
            if (lists[cur.second] != nullptr){
                pq.push(make_pair(lists[cur.second]->val, cur.second));
                lists[cur.second] = lists[cur.second]->next;
            }
        }
        return start->next->next;
        
    }
};