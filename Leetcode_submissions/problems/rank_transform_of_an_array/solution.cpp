class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& in) {
        vector<vector<int> > arr;
        for (int i=0;i<in.size();i++){
            arr.push_back(vector<int>({in[i], i}));
        }
        sort(arr.begin(), arr.end());
        int rank = 1;
        vector<int> ans(in.size(), 0);
        map<int, int> st;
        for (auto cur: arr){
            if (st.find(cur[0]) != st.end()){
                ans[cur[1]] = st[cur[0]];
                
                continue;
            }
            st[cur[0]] = rank;
            ans[cur[1]] = rank++;
        }
        return ans;
    }
};