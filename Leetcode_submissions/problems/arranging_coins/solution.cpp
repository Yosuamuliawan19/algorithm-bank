class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0, cnt = 1;
        while (n >= cnt){
            ans ++; 
            n -= cnt;
            cnt ++;
        }
        return ans;
    }
};