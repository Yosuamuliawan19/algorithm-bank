class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        while (x != 0 || y != 0){
            // printf("%d %d\n", x , y) ; 
            if (((x&1) ^ (y&1)) == 1) ans++;
            x >>= 1;
            y >>= 1;
        }
        return ans;
    }
};