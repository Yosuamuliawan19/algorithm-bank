class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int x = 32;
        while (x--){
            // cout << (n & 1) << endl;
            ans = (ans << 1) | (n&1);
            n = n>>1;
        }
        return ans;
    }
};