class Solution {
public:
    vector<int> cand;
    vector<vector<int> > finalans;
    int t, n;
    void solve(int idx, int sum, vector<int> ans) {
        // cout << idx << " " << sum <<  " " << ans.size() << endl;
        if (sum == t){
            finalans.push_back(ans);
            return;
        }
        if (idx == n) return;
            
        solve(idx+1, sum, ans);

        if (sum + cand[idx] <= t){
            ans.push_back(cand[idx]);
            solve(idx, sum + cand[idx], ans);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        cand = candidates; t = target; n = cand.size();
        vector<int> a;
        solve(0, 0, a);
        return finalans;
    }
};