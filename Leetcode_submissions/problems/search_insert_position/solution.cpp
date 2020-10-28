class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(INT_MAX);
        int l = 0, r = nums.size();
        while (r > l){
            int m = l + (r-l)/2;
            // cout << l << " " << m<< " " << r << " " << nums[m] << endl;
            if (nums[m] >= target){
                r = m;
            }else{
                l = m + 1;
            }
        }
        return r;
    }
};