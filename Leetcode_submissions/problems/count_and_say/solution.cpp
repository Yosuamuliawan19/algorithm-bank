class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string s = countAndSay(n-1), ans = "";
        int count = 1;
        char prev = s[0];
        for (int i=1; i < s.length(); i++){
            if (prev != s[i]){
                ans += to_string(count) + prev;                            
                prev = s[i];
                count = 1;
            }else count ++;
        }  
        ans += to_string(count) + prev;
        return ans;        
    }
};