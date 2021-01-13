class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        lower--; upper ++;
        vector<string> ans;
        if (nums.size() == 0) {
            if (upper-1 == lower+1){
                ans.push_back(to_string(lower+1));
            }else{
                ans.push_back(to_string(lower+1) + "->" + to_string(upper-1));    
            }
            return ans;
        }
        
        if (nums[0] != lower && nums[0] != lower+1){
            if (nums[0] - 1 == lower + 1){
                ans.push_back(to_string(lower+1));
            }else{
                ans.push_back(to_string(lower+1) + "->" + to_string(nums[0]-1));    
            }
        }
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i] != nums[i+1] && nums[i] + 1 != nums[i+1]){
                if (nums[i]+1 == nums[i+1]-1) {
                    ans.push_back(to_string(nums[i]+1));
                }else{
                     ans.push_back(to_string(nums[i]+1) + "->" + to_string(nums[i+1]-1));
                }
            }
        }
         if (nums[nums.size()-1] != upper && nums[nums.size()-1] +1 != upper){
             if  (nums[nums.size()-1] +1 == upper-1) {
                    ans.push_back(to_string(upper-1));
                }else{
                 ans.push_back(to_string(nums[nums.size()-1]+1) + "->" + to_string(upper-1));
             }
            
        }
        
        return ans;
    }
};