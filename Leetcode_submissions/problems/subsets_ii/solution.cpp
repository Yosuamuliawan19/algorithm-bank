class Solution {
public:
    set<vector<int>> st;
    vector<int> nums;
    int n;
    void rec(int idx, vector<int> cur){
        st.insert(cur);
        if (idx == n-1){            
            return;
        }
        for (int i=idx+1;i<n;i++){
            cur.push_back(nums[i]);
            rec(i, cur);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; 
        n = nums.size();
        sort(nums.begin(), nums.end());
        this->nums = nums;
        rec(0, vector<int>());
        rec(0, vector<int>({nums[0]}));
        for (auto cur: st){
            ans.push_back(cur);
        }
        return ans;
    }
};