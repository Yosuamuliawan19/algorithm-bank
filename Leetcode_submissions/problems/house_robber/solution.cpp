class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> arr =  vector<int>(nums.size(), 0);
        arr[0] = nums[0];
        if (nums.size() >= 2) arr[1] = nums[1];
        for (int i=2;i<nums.size();i++){
            if (i == 2){
                arr[i] = nums[i] + arr[i-2];
            }else{
                arr[i] = max(nums[i] + arr[i-3], nums[i] + arr[i-2]);
            }
        }
        
        
//         for (int i: arr){
//             cout << i << endl;
//         }
        
        
        
        int n = nums.size()-1, idx = 0 ;
        int ans = 0;
        while (n != -1 && idx < 3){
            ans = max(ans, arr[n]);
            n--;idx++;
        }
        return ans;
        
    }
};