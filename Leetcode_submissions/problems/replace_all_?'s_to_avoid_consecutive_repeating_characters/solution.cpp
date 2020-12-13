class Solution {
public:
    string modifyString(string s) {
        for (int i=1;i<s.size()-1;i++){
            if (s[i] == '?'){
                for (int j='a';j<='z';j++){
                    if (j != (int)s[i+1] && j != (int)s[i-1]){
                        s[i] = j; break;
                    }
                }
            }
        }
        if (s == "??") return "ab";
        if (s[0] == '?'){
            if (s.length() == 1){
                return "a";
            }else{
                s[0] = 'a' + ((s[1]-'a'+1)%26);
            }
        }
        
        
        if (s[s.length()-1] == '?'){
            if (s.length() == 1){
               return "a";
            }else{ 
                s[s.length()-1] = 'a' + ((s[s.length()-2]-'a'+1)%26);
            }
        }
        return s;
    }
};