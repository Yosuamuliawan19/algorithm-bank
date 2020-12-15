class Solution {
public:
    set<vector<int>> st;
    vector<int> nums;
    int n;
    void rec(vector<int> cur, int mask ){
        if (cur.size() == n){
            st.insert(cur);
            return;
        }
        for (int i=0;i<n;i++){
            if (!(mask >> i & 1)){
                // cout << i << " " << !(mask >> i & 1) << endl;
                vector<int> next = cur;
                next.push_back(nums[i]);
                // cout << mask << " " << ( mask | 1<<i) << endl;
                rec(next, mask | 1<<i);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        this->nums = nums;
        this->n = nums.size();
        rec(vector<int>(), 0);
        vector<vector<int>> ans;
        for (auto c: st){
            ans.push_back(c);
        }
        return ans;
    }
};