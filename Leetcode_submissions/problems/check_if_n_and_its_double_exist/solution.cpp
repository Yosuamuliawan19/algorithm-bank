class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        int cnt = 0;
        for (auto i: arr){
            if (st.find(i*2) != st.end()) return 1;
             st.insert(i);
            if (i == 0){
                cnt ++;
            }
        }
        
        for (auto i: arr){
            if (i == 0){
                if (cnt >= 2) return 1;
                continue;
            }
            if (st.find(i*2) != st.end()) return 1; 
        }
        return 0;
    }
};