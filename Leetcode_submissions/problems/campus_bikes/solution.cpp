class Solution {
public:
   
    vector<int> assignBikes(vector<vector<int>>& workers, vector<vector<int>>& bikes) {
        vector<int> ans = vector<int>(workers.size(), -1);
        vector<bool> btow = vector<bool>(bikes.size(), 0);
        vector<vector<pair<int,int>> > arr(2001);
        for (int i=0;i<workers.size();i++){
            for (int j=0;j<bikes.size();j++){
                // cout << i << " "<< j << endl;
                arr[abs(workers[i][0]-bikes[j][0]) + abs(workers[i][1]-bikes[j][1])].push_back(make_pair(i, j));
            }
        }
        int cnt = 0;
        // cout << "hey\n";
        for (auto cur_arr: arr){
            for (auto cur: cur_arr){
                 if (ans[cur.first] == -1 && !btow[cur.second] ) {
                    ans[cur.first] = cur.second;
                     btow[cur.second] = 1;
                   
                }
            }  
            // printf("%d %d %d\n", cur[0], cur[1], cur[2]);
        }
        return ans;
    }
};