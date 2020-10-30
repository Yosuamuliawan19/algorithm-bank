class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int minprice = prices[0], maxprof = 0; 
        for (int i=1;i<prices.size();i++){
            if (prices[i] < minprice) minprice = prices[i];
            else if (maxprof < prices[i] - minprice){
                maxprof = prices[i] - minprice;
            }
        }
        return maxprof;
    }
};