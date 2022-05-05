class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int total = 1, zeros = 0;
        for (int cur: nums){
            if (cur == 0) zeros ++;
            else total *= cur; 
        }
        for (int cur: nums){
            
            if (cur == 0) {
                if (zeros == 1) ans.push_back(total);
                else ans.push_back(0);
            }else{
                if (zeros > 0){
                    ans.push_back(0);
                }else{
                    ans.push_back(total / cur);
                }
            }
        
        }
        return ans;
        
        
    }
};