class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int idx = 0, count = 0;
       
        for(int i=0;i<n;i++){
            if (nums[i] != 0){
                nums[idx++] = nums[i]; 
            }else {
                count ++;
            }
        }
        
        for(int i=n-1;i>n-1-count;i--){
            nums[i] = 0;
        }
        
        
    }
};