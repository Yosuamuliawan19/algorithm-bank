class Solution {
public:
    string toGoatLatin(string S) {
        string ans = "", cur = "";
        int idx = 1;
        for (int i=0;i<S.length();i++){
            if (S[i] == ' ' || i == S.length()-1){
                if (i == S.length()-1) cur += S[i];
                
                if (cur[0] == 'a' || cur[0] == 'e' || cur[0] == 'i' || cur[0] == 'o' || cur[0] == 'u' ||
                   cur[0] == 'A' || cur[0] == 'E' || cur[0] == 'I' || cur[0] == 'O' || cur[0] == 'U'){
                    cur += "ma";
                }else{
                    cur = cur.substr(1, cur.length()-1) + cur.substr(0, 1) + "ma";
                }
                
                for (int i=0;i<idx;i++){
                    cur += "a";   
                }
                if (idx != 1) ans += " ";
                ans += cur;
                
                idx ++;
                cur = "";
            }else{
                cur += S[i];
            }
        }
        return ans;
    }
};