class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (!stones.size()) return 0;
        priority_queue<int> pq;
        int a = 0, b = 0;
        for(auto i: stones) pq.push(i);
        
        while (true){
            a = pq.top(); pq.pop();
            if (pq.empty()){
                return a;
            }
            a = abs(a-pq.top()); pq.pop();
            pq.push(a);
        }
        
        return a;
    }
};