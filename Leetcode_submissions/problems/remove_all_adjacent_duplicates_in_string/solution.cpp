class Solution {
public:
    string removeDuplicates(string S) {
        int n = S.length(), idx = 0;
        stack<char> st;
        while (idx != n){
            while (!st.empty() && idx != n && st.top() == S[idx]){
                st.pop(); idx++;
                
            }
            if (idx == n) break;
            st.push(S[idx++]);
        }
        string ans = "";
        while (!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};