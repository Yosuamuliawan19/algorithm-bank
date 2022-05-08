class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i=0;i<s.length();i++){
            if (st.empty()) {
                st.push(s[i]);
                continue;
            }
            // cout << st.top() << " " << s[i] << endl;            
            if (st.top() == '{' && s[i] == '}'){
                st.pop(); continue;
            } else if (st.top() == '(' && s[i] == ')'){
                st.pop(); continue;
            } else  if (st.top() == '[' && s[i] == ']'){
                st.pop(); continue;
            }else st.push(s[i]);
        }
        // cout << st.size() << st.top() <<  endl;
        return st.empty();
    }
};