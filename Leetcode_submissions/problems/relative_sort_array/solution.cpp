class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans, tmp;
        set<int> st;
        map<int,int> mp;
        for (auto i: arr2){
            st.insert(i);
        }
        for (auto i: arr1){
            if (st.find(i)!=st.end()) mp[i] ++;
            else tmp.push_back(i);
        }
        for (auto i: arr2){
            int amt = mp[i];
            for (int j=0;j<amt;j++){
                ans.push_back(i);
            }
        }
        sort(tmp.begin(), tmp.end());
        for (auto i: tmp){
            ans.push_back(i);
        }
        return ans;
    }
};