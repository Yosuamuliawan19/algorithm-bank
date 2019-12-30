class Solution {
public:
    int reverse(long long x) {
        bool is_neg = 0;
        if (x < 0) is_neg = 1;
        x = abs(x);
        long long ans  = 0;
        while (x != 0){
            ans = (ans* 10) + (x % 10);
            if (ans > INT_MAX){
                return 0;
            }
            x /= 10;
        }
        
        if (is_neg) ans *= -1;
        
        if (ans < INT_MIN){
            return 0;
        }
        
        
        
        return ans;
    }
};