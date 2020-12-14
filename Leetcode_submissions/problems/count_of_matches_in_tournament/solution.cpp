class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        while (n != 1){
            if (n % 2 == 0){
                n/=2;
                ans += n;
            }else{
                ans += (n-1)/2;
                n = 1 + ((n-1)/2);
            }
        }
        return ans;
    }
};