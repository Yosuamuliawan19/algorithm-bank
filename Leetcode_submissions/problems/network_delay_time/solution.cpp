class Solution {
public:
    vector<vector<pair<int,int>>> adjList;
    vector<int> vis;
    void dfs(int node, int time){
        // cout << node+1 <<" " << time << endl;
        for (auto cur: adjList[node]){
            if (vis[cur.first] > time+cur.second){
                vis[cur.first] = time+cur.second;
                dfs(cur.first, time+cur.second);
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        adjList = vector<vector<pair<int,int>>>(N, vector<pair<int,int>>());
        vis = vector<int>(N, INT_MAX);
        for (auto cur: times){
            adjList[cur[0]-1].push_back(make_pair(cur[1]-1, cur[2]));
        }
        vis[K-1] = 0;
        dfs(K-1, 0);
        int cnt = 0;
        int ans = 0;
        for (auto cur: vis){
            if (cur != INT_MAX){
                cnt ++;
                ans = max(ans, cur);
            }
        }
        return (cnt == N ? ans: -1);
    }
};