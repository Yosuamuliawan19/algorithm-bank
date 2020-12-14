class Solution {
public:
    int lengthOfLastWord(string s) {
        string prev = "";
        if (s[0] != ' ') prev += s[0];
        for (int i=1;i<s.length();i++){
            if (s[i-1] == ' ' && s[i] != ' '){
                prev = s[i];
            }else if (s[i] != ' '){
                prev += s[i];
            }
        }
        
        return prev.size();
    }
};