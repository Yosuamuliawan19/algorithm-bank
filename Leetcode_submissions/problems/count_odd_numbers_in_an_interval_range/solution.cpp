class Solution {
public:
    int countOdds(int low, int high) {
        if (high-low==2) return high%2==0? 1: 2;
        int ans = 0 ;
        if (high%2==0){
            high --; 
        }
        if (low%2==0){
            low ++; 
        }
        return ans + ((high-low+2)/2);
    }
};