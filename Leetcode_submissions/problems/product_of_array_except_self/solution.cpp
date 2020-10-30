class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr1, arr2, ans;
        int sofar = 1;
        for (int i=0;i<nums.size();i++){
            arr1.push_back(sofar);
            sofar *= nums[i];
        }
        sofar = 1;
        for (int i=nums.size()-1;i>=0;i--){
            arr2.push_back(sofar);
            sofar *= nums[i];
        }
        
        for (int i=0;i<nums.size();i++){
            ans.push_back(arr1[i] * arr2[nums.size()-1-i]);
        }
        return ans;
    }
};