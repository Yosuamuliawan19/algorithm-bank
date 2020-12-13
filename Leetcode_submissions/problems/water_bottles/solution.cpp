class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0;
        int ans = 0;
        while (numBottles > 0){
            ans += numBottles;
            
            empty += numBottles;
            numBottles = 0;
            
            numBottles += floor(empty/numExchange);
            // cout << empty << " " << floor(empty/numExchange) << endl;
            empty -= numExchange * floor(empty/numExchange);
        }
        return ans;
    }
};