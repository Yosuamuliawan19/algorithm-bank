class Solution {
public:
    int countLetters(string S) {
        int ans = 0;
        for (int i=0;i<S.size();i++){
            set<char> st;
            for (int j=i;j<S.size();j++){
                st.insert(S[j]);
                if (st.size() > 1) break;
                ans ++;
            }
        }
        return ans;
    }
};