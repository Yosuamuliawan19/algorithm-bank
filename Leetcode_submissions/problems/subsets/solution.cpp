class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.push_back(vector<int>());
        for(auto i: nums){
            int m = ans.size();
            for (int j=0;j<m;j++){
                vector<int> a = ans[j];
                a.push_back(i);
                ans.push_back(a);
            }
        }
        return ans;
    }
};