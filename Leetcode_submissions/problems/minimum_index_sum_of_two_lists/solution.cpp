class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        map<string, int> mp;
        set<string> st;
        for (int i=0;i<list1.size();i++){
            if (mp.find(list1[i]) == mp.end()){
                mp[list1[i]] = i;
            }
        }
        int sum = INT_MAX;
        for (int i=0;i<list2.size();i++){
            if (st.find(list2[i]) == st.end()){
                st.insert(list2[i]);
                if (mp.find(list2[i]) != mp.end()){
                    // cout << list2[i] << endl;
                    int cursum = mp[list2[i]] + i;
                    
                    if (cursum < sum){
                        ans = vector<string>();
                        ans.push_back(list2[i]);
                        sum = cursum;
                    }else if (cursum == sum){
                        ans.push_back(list2[i]);
                    }
                    
                }
                
            }
        }
        return ans;
    }
};