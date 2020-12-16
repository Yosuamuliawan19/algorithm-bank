class Solution {
public:
    // bool cmp(vector<int> )
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i=0;i<intervals.size();i++){
            
            int l = intervals[i][0], r = intervals[i][1];
            // cout << l << "-"<< r << endl;
            while (i != intervals.size()-1 && intervals[i+1][0] <= r){
                r = max(r, intervals[i+1][1]);
                i++;
            }
            ans.push_back(vector<int>({l,r}));
            // cout << l << " " << r << endl;
        }
        
        return ans;
    }
};