class Solution {
public:
    vector<vector<pair<int, double>>> adjList;
    set<string> st;
    bool vis[45] = {0};
    int toFind;
    int foundCount = 0;
    vector<double> ans;
    void dfs(int cur, double value){
        if (foundCount > 2) return;
        // printf("cur %d, val %.6f\n", cur, value);
        vis[cur] = 1;
        if (cur == toFind){
            // printf("Found with val %.6f\n", value);
            if (foundCount == 0){
                ans.push_back(value);
            }else{
                ans[ans.size()-1] = -1.0;
            }
            foundCount ++;
            return;
        }
        
        
        for (int i=0;i<adjList[cur].size();i++){
            if (!vis[adjList[cur][i].first]){
                dfs(adjList[cur][i].first, value * adjList[cur][i].second);
            }
        }
    }
    
    int indexCounter = 0 ;
    map<string, int> idxMap;
    int toIndex(string a){
        if (idxMap.find(a) != idxMap.end()){
            return idxMap[a];
        }else{
            return idxMap[a] = indexCounter ++;
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        adjList = vector<vector<pair<int, double>>>(40,vector<pair<int, double>>());
       
        for (int i=0;i<equations.size();i++){
            st.insert( equations[i][0]);
            st.insert( equations[i][1]);
            adjList[toIndex( equations[i][0])].push_back(make_pair( toIndex(equations[i][1]), values[i]));
            adjList[toIndex( equations[i][1])].push_back(make_pair( toIndex(equations[i][0]), 1.0/ values[i]));
        }
        for (vector<string> q: queries){
            if (st.find(q[0]) != st.end() && q[0] == q[1]){
                ans.push_back(1);
            }else if (st.find(q[0]) == st.end() || st.find(q[1]) == st.end()){
                ans.push_back(-1);
            }else{
                memset(vis, 0, sizeof(vis));
                toFind = toIndex(q[1]);
                foundCount = 0;
                dfs(toIndex(q[0]), 1.0);
                if (foundCount == 0){
                    ans.push_back(-1.0);
                }
                
                // cout << "---" << endl;
            }
        }
        return ans;
    }
};