class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<string> st;
        for (string s: A){
            string odd = "" , even = "";
            for (int i=0;i<s.size();i++){
                if (i%2==0) even += s[i];
                else odd += s[i];
                    
            }
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            st.insert(odd+even);
        }
        return st.size();
    }
};