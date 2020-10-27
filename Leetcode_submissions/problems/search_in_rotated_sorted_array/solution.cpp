class Solution {
public:
    int binser(vector<int>& nums, int l, int r, int target){
        // cout << l << " " << r << " "<< target << endl;
        while (r >= l){
            int m = l + (r-l)/2;
            if (nums[m] == target){
                return m;
            }else if (nums[m] > target){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int split = 0;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i] > nums[i+1]){
                split = i;
                break;
            }
        }
        int a = binser(nums, 0, split, target);
        int b = binser(nums, split+1, nums.size()-1, target);
        // cout << a << " " << b << endl;       
        
        if (a == -1 && b == -1) return -1;
        else if (a != -1) return a;
        else return b;        
    }
};