class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[nums.size()-1];
        for (int i=0;i<nums.size()-2;i++){
            int l=i+1, r=nums.size()-1;
            int sum = nums[i]+nums[l]+nums[r];
            while (r > l){
                sum = nums[i] + nums[l] + nums[r];
                // cout << sum <<" " << i << " "<< l << " " <<r << endl;
                if (abs(target-sum) < abs(target-ans)){
                    ans = sum;
                }
                if (sum == target) return target;
                if (sum > target){
                    r--;
                }else{
                    l++;
                }
            }    
            // cout << sum << endl;
            
        }
        return ans;
        
    }
};