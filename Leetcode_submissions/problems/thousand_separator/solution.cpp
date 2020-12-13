class Solution {
public:
    string thousandSeparator(int n) {
        if (n == 0) return "0";
        string ans = "";
        while (n != 0){
            
            ans = to_string(n%1000) + ans;
            if (n/1000 != 0){
                if (n%1000 < 100){
                    ans = "0"+ans;
                }else if (n%1000 < 10){
                    ans = "00"+ans;
                }
                ans = "." + ans;
            }
            
            n /= 1000;
            
        }
        return ans;
    }
};