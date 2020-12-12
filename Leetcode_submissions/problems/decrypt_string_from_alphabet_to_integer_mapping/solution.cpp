class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for (int i=s.size()-1;i>=0;i--){
            if (s[i] == '#'){
                ans = (char)('a'-1 + ((s[i-2]-'0')*10 +  (s[i-1]-'0'))) + ans;      
                i-=2;
            }else{
                ans = (char)('a'-1 + (s[i]-'0')) + ans;
            }
        }
        return ans;
    }
};