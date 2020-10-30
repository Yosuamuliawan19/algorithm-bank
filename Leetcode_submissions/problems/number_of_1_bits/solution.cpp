class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long mul = pow(2, 32), ans = 0;
        while (mul != 0 && n != 0){
            if(n - mul >= 0){
                // cout << mul << endl;
                n -= mul; ans ++;
            }
            mul /= 2;
        }
        // cout << n << endl;
        return ans;
    }
};