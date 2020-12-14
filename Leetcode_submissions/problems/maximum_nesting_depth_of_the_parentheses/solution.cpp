class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int mx = 0;
        for (int i=0;i<s.length();i++){
            if (s[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }else if (s[i] == '('){
                st.push('(');
                mx = max(mx, (int)st.size());
            }
        }
        return mx;
    }
};