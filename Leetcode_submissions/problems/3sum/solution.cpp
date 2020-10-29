class Solution {
public:
    vector<vector<int>> ans;
    int binser(vector<int> & nums, int t, int l, int r){
        if (r >= nums.size()) return -1;
        while (r >= l){
            int m = l + (r-l)/2;
            if (nums[m] == t){
                return m;
            }else if(nums[m] > t){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return -1;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return ans;
        
        // to prune the search space;
        vector<int> newnums;
        int prev = nums[0], count = 1;
        for (int i=1;i<nums.size();i++){
            if (nums[i] != prev){
                newnums.push_back(prev);
                if (count >= 2) newnums.push_back(prev);
                if (count >= 3) newnums.push_back(prev);
                prev = nums[i];
                count = 1;
            }else{
                count++;
            }
        }
        
        newnums.push_back(prev);
        if (count >= 2) newnums.push_back(prev);
        if (count >= 3) newnums.push_back(prev);
        
        // sort the input
        nums = newnums;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        cout << n << endl;
        
        // search 3sum
        set<vector<int> > st;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                int res = binser(nums, 0 - (nums[i]+nums[j]), j+1, n-1);
                if (res != -1){
                    vector<int> a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[res]);
                    if (st.find(a) != st.end()) continue;
                     st.insert(a);
                    ans.push_back(a);
                }
            }
        }
        return ans;
    }
};