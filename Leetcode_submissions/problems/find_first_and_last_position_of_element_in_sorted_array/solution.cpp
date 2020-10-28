class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = -1, b = -1;
        if (nums.size() != 0){
            a = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
            b = upper_bound(nums.begin(), nums.end(), target)-nums.begin();  b--;
            cout << a << " " << b << endl;
            if (a == nums.size() || nums[a] != target) a = -1;
            if (b == -1 || nums[b] != target) b = -1;
        }
    
        
       
        
        vector<int> ans; 
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};