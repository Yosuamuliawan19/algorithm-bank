class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<pair<int,int> > pq; 
        vector<vector<int> > ans;
        for (int i = 0; i < points.size(); i++){
            pq.push_back(make_pair(
                (points[i][0]*points[i][0]) + (points[i][1]*points[i][1])
                , i));
        }
        
        sort(pq.begin(), pq.end());
        
        for (int i=0;i<K;i++){
            ans.push_back(points[pq[i].second]);
            // cout << points[pq[i].second][0] << " " << points[pq[i].second][1] << endl;
        }
        return ans;
    }
};