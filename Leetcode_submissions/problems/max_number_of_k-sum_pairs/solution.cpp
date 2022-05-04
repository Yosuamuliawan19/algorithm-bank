class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       int ans = 0; 
        map<int,int> mp; 
        
        
        
        for (int i=0; i<nums.size(); i++){
            int y = k - nums[i];
            
            if (mp.count(y) != 0 && mp[y] != 0){
                ans ++;
                mp[y] --;
            }else{
                if (mp.count(nums[i]) != 0){
                    mp[nums[i]] ++;
                }else{
                    mp[nums[i]] = 1;
                }
                
            }
        }
        
        
        return ans;
    }
};