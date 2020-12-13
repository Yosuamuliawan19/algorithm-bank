class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if (n%2 == 0){
            for (int i=1;i<n;i++) ans += "a";
            ans += "b";
        }else{
            if (n == 1) return "a";
            for (int i=2;i<n;i++) ans += "a";
            ans += "bc";
        }
        return ans;
    }
};