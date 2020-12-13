class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int> > arr;
        
        for (int i=0;i<mat.size();i++){
            int cnt = 0 ;
            for (int j=0;j<mat[i].size();j++){
                if (mat[i][j] == 0) break;
                cnt++;
            }
            arr.push_back(vector<int> ({cnt,i}));
        }
        vector<int> ans;
        
        sort(arr.begin(), arr.end());
        
        for (int i=0;i<k;i++){
            ans.push_back(arr[i][1]);
            // cout << arr[i][0] << " " << arr[i][1] << endl;
        }
        
        return ans;
    }
};