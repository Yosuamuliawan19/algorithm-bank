class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        sort(nums.begin(), nums.end());
        
        int prev = INT_MAX, count = 0;
        
        for (int i: nums){
            if (prev != i){
                if (count > n){
                    return prev;
                }
                prev = i;
                count = 1;
            }else{
                count ++;
            }
        }
        
    
        return prev;
        
        
        
    }
};