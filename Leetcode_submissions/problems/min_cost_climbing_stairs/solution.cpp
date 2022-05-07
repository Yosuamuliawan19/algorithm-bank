class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> arr = vector<int>(cost.size(), 0);
        
        arr[0] = cost[0];
        for (int i=1;i<cost.size();i++){
            if (i != 1){
                arr[i] = min(cost[i] +  arr[i-1], cost[i] + arr[i-2]);
            }else {
                arr[i] = min(cost[i] +  arr[i-1], cost[i] + 0);
            }
        }
        
        // for (int i: arr){
        //     cout << i << endl;
        // }
        return min(arr[cost.size()-2], arr[cost.size()-1]);
    }
};