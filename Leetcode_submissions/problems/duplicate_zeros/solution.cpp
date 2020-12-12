class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;
        for (int i=0;i<arr.size();i++){
            if (ans.size() == arr.size()) break;
            ans.push_back(arr[i]);
            if (ans.size() == arr.size()) break;
            if (!arr[i]) ans.push_back(arr[i]);
        }
        arr = ans;
        
    }
};