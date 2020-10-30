class Solution {
public:
    int titleToNumber(string s) {
        if (s.length() == 0) return 0;
        
        int ans = (s[s.length()-1]-'A'+1);
        long long mul = 26 ;
        for (int i=s.length()-2;i>=0;i--){
            ans += (s[i]-'A'+1)*mul;
            mul *= 26;
        }
        return ans;
    }
};