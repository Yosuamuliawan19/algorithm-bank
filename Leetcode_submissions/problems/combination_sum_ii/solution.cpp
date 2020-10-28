class Solution {
public:
    vector<int> arr;
    vector<vector<int> > ans;
    map<int,int> amount;
    int n, t;
    void solve(int idx, int sum, vector<int> cur){
        if (sum == t) {
            ans.push_back(cur);
            return;
        }
        if (idx == n) return ;
        solve(idx+1, sum, cur);
        
        int m = amount[arr[idx]];
        for (int i=0;i<m;i++){
            if (sum+arr[idx] <= t){
                cur.push_back(arr[idx]);
                sum+=arr[idx];
                 solve(idx+1, sum, cur);
            }else break;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        for (auto i: candidates) amount[i]++;
        for (auto i: amount) arr.push_back(i.first);
        sort(arr.begin(), arr.end());
        n = arr.size(); t = target; vector<int> a;
        solve(0, 0, a);
        return ans;
    }
};