class Solution {
public:
    vector<vector<int> > adjList;
    vector<bool> vis;
    int cnt = 0;
    int destination;
    void rec(int cur){
        if (cnt != 0) return;
        vis[cur] = 1;
        // cout << "current " << cur << endl;
        for (int i=0;i<adjList[cur].size();i++){
            if (adjList[cur][i] == cur){
                cnt = 10000;
                return;
            }
            if (!vis[adjList[cur][i]]){
                 rec(adjList[cur][i]);
            }else{
                
                // cout << "dead end "<< adjList[cur][i] << endl;
                if (adjList[cur][i] != destination)
                cnt ++;
            }
        }
        vis[cur] = 0;
        if (adjList[cur].size() == 0){
            // cout << "dead end "<<cur << endl;
            if (cur != destination)
            
            cnt ++;
        }
    }
    bool leadsToDestination(int n, vector<vector<int>>& edges, int source, int destination) {
        vis = vector<bool>(n+1, 0);
        adjList =  vector<vector<int> >(n+1, vector<int>());
        this->destination = destination;
        set<vector<int>> st;
        for (int i=0;i<edges.size();i++){
            if (st.find(edges[i]) == st.end()) {
                // cout << edges[i][0] << " " <<edges[i][1] << endl;
                adjList[edges[i][0]].push_back(edges[i][1]);
            }
            st.insert(edges[i]);
        }
        rec(source);
        return cnt == 0;
    }
};