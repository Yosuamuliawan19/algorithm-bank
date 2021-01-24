class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans = 1;
        if (num == 1) ans --;
        for (int i=2;i<=sqrt(num);i++){
            if (num%i == 0){
                int a = num/i, b = i;
                if (a == b){
                    ans += a;
                }else{
                    ans += a + b;
                }
            }
        }
        
        return ans == num;
    }
};