class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int, vector<int> > mp;
        for (auto i: pieces){
            mp[i[0]] = i;
        }
        for (int i=0;i<arr.size();i++){
            // cout << arr[i] << endl;
            if (mp.find(arr[i]) == mp.end()) return false;
            int a = i;
            for (int j=0;j<mp[arr[i]].size();j++){
                // cout << arr[a] << " " << mp[arr[i]][j] << endl;
                if (arr[a] != mp[arr[i]][j]) return false;
                a++;
            }
            i = a-1;
        }
        return 1;
    }
};