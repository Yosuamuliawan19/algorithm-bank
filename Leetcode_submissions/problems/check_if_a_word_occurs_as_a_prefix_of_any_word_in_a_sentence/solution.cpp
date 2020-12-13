class Solution {
public:
    int isPrefixOfWord(string s, string searchWord) {
        int idx = 0;
        string cur = "";
        for (int i=0;i<s.size();i++){
            if (s[i] == ' '){
                idx++;
                if (cur.substr(0, searchWord.length()) == searchWord){
                    return idx;
                }
                cur = "";
            }else{
                cur += s[i];
            }
            
            if (i == s.size() -1){
                idx++;
                if (cur.substr(0, searchWord.length()) == searchWord){
                    return idx;
                }
            }
        }
        return -1;
    }
};