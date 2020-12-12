class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int mn_dif = INT_MAX;
        
        vector<vector<int>> ans;
        for (int i=0;i<n-1;i++){
            mn_dif = min(mn_dif, arr[i+1]-arr[i]);
        }
        for (int i=0;i<n-1;i++){
            if (arr[i+1]-arr[i] == mn_dif) ans.push_back(vector<int>({arr[i], arr[i+1]}));
        }
        
        return ans;
    }
};