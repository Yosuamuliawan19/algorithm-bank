class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> ans;
        if (nums.size() == 0) return ans;
        int prev, left;
        for (int i=0;i<nums.size();i++){
            if (nums[i] != prev + 1){
                if (i != 0){
                    if (left == prev){
                        ans.push_back(to_string(left));
                    }else{
                        ans.push_back(to_string(left) + "->"+ to_string(prev));
                    }
                }
                // printf("%d %d\n", left, prev);
                left = nums[i];
                prev = nums[i];
            }
            prev = nums[i];
        }
        
        if (left == nums[nums.size()-1]){
            ans.push_back(to_string(left));
        }else{
            ans.push_back(to_string(left) + "->" + to_string(nums[nums.size()-1]));
        }
        // printf("%d %d\n", left, nums[nums.size()-1]);
        return ans;
    }
};