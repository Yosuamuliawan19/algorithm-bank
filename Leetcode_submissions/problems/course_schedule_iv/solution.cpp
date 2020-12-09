class Solution {
public:
    vector<vector<int> > adjList; 
    map<pair<int,int>, bool > memo;
    bool dfs(int cur, int tar){
        if (memo.find(make_pair(cur, tar))!= memo.end()){
            return memo[make_pair(cur, tar)];
        }
        if (cur == tar){
            return memo[make_pair(cur, tar)] = 1;
        }else{
            bool res = 0;
            for (auto next: adjList[cur]){
                res = res || dfs(next, tar);
            }
            return memo[make_pair(cur, tar)] = res;
        }
    }
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        adjList = vector<vector<int> >(n, vector<int>());
        vector<bool> ans;
        for (auto cur: prerequisites)
        {
            adjList[cur[0]].push_back(cur[1]);
        }           
        for (auto cur: queries){
            ans.push_back(dfs(cur[0], cur[1]));
        }
        return ans;
    }
};