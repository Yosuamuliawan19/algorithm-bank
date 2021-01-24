class Solution {
public:
    string reverseWords(string s) {
        string ans = "", cur = "";
        for (int i=0;i<s.length();i++){
            if (s[i] == ' '){
                for (int i=cur.length()-1;i>=0;i--) ans += cur[i];
                ans += ' ';
                cur = "";
            }else cur += s[i];
        }
        for (int i=cur.length()-1;i>=0;i--) ans += cur[i];
        return ans;
    }
};