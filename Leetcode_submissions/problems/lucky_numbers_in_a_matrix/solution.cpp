class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& arr) {
        int n = arr.size(), m = arr[0].size();
        vector<int> r(n), c(m);
        for (int i=0;i<n;i++){
            int mn = INT_MAX;
            for (int j=0;j<m;j++){
                mn = min(mn, arr[i][j]);
            }
            r[i] = mn;
        }
        
        for (int j=0;j<m;j++){
            int mn = INT_MIN;
            for (int i=0;i<n;i++){
                mn = max(mn, arr[i][j]);
            }
            c[j] = mn;
        }
        for (auto i: r){
            cout << i << " ";
        }cout << endl;
        
        for (auto i: c){
            cout << i << " ";
        }cout << endl;
        vector<int> ans;
        
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (arr[i][j] == r[i] && arr[i][j] == c[j]) ans.push_back(arr[i][j]);
            }
           
        }
            return ans;
    }
};