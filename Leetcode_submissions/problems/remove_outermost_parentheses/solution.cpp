class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> st;
        string ans = "";
        int n = S.size(), left = 0;
        for (int i=0;i<n;i++){
            if (!st.empty() && st.top() == '(' && S[i] == ')'){
                st.pop();   
            }else st.push(S[i]);
            
            if (st.empty()) {
                ans += S.substr(left+1, i-left-1);
                left = i+1;
            }
        }
        
        return ans;
    }
};