class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        unordered_set<int> vis;
        for (int i: nums){
            st.insert(i);
        }
        
        int ans = 0;
        for (auto i: st){
            if (vis.find(i) != vis.end()){
                continue;
            }
                
                
            int cur = 1;
            for (int a=i+1; a <= INT_MAX; a++){
                if (st.find(a) != st.end() && vis.find(a) == vis.end()){
                    cur ++;
                    vis.insert(a);
                }else break;
            }
            for (int a=i-1; a >= INT_MIN; a--){
                if (st.find(a) != st.end() && vis.find(a) == vis.end()){
                    cur ++;
                    vis.insert(a);
                }else break;
            }
            ans = max(ans, cur);
        }
        return ans;
    }
};