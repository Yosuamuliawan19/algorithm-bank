class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        
        for (int i=0;i<nums.size();i++){
            if (mp.count(nums[i]) == 0){
                mp[nums[i]] = i;
            }else{
                nums[i] = nums[mp[nums[i]]] = (-3*10000)-1;
            }
        }
        
        
        for (int i=0;i<nums.size();i++){
            if (nums[i] != (-3*10000)-1){
                return nums[i];
            }
        }
        return -1;
        
    }
};