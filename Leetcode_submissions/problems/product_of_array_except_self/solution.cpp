class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a(nums.size()+1), b(nums.size()+1), ans(nums.size());
        int n = nums.size();
        a[0] = 1; b[n] = 1;
        for (int i=1;i<n;i++){
            a[i] = a[i-1] * nums[i-1];
        }
        for (int i=n-1;i>=0;i--){
            b[i] = b[i+1] * nums[i];
        }
        
        for (auto i : a )cout << i << " " ;
        cout << endl;
        
        for (auto i : b)cout << i << " " ;
        cout << endl;
        
        
        for (int i=0;i<n;i++){
            ans[i] = (a[i]*b[i+1]);
        }
        return ans;
    }
};