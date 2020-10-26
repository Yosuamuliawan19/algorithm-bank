class Solution {
public:
    bool isValid(string s) {
        stack<char> q;
        bool f = 1;
        for (int i=0;i<s.length();i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') q.push(s[i]);
            else if (s[i] == ')'){
                if (q.empty() || q.top() != '('){
                    f = 0;break;
                }
                q.pop();
            }else if  (s[i] == '}'){
                if (q.empty() || q.top() != '{'){
                    f = 0;break;
                }
                q.pop();
            }else{
                if (q.empty() || q.top() != '['){
                    f = 0;break;
                }
                q.pop();
            }
        } 
        if (!q.empty()) f = 0;
        return f;
    }
};