class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ans = 0;
        pair<int,int> cur; 
        map<pair<int,int>, int>  st;
        
        for (auto i: dominoes){
            if (i[0] > i[1]){
                cur = make_pair(i[0], i[1]);
            }else{
                cur = make_pair(i[1], i[0]);
            }
            if (st.find(cur) != st.end()){
                ans += st[cur];
                st[cur]++;
            }else st[cur] = 1;
        }
        
        
        
        return ans;
    }
};