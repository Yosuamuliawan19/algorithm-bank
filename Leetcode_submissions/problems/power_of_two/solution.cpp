class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 0) return 0;
        int cnt = 0;
        while (n != 0){
            if (n & 1){
                cnt++;
            }
            n = n >> 1;
        }
        return cnt == 1; 
    }
};