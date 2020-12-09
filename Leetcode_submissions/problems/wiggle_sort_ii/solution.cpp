class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        int  a = ((nums.size()+1)/2) -1;
        int b = nums.size()-1;
        for (int i=0;i<nums.size();i++){
            if (i % 2){
                ans.push_back(nums[b--]);
            }else{
                ans.push_back(nums[a--]);
            }
        }      
        nums = ans;
    }
    // 1 1 2 
    // 2 3 3
    
    
    // 2, 3, 1, 3, 1, 2
    // 5 6 4 5
};