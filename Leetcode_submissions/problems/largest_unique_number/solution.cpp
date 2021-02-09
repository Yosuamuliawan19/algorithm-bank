class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        map<int,int> mp;
        for (int a: A){
            mp[a]++;
        }
        int ans = -1;
        for (auto it: mp){
            // cout << it.first << " " << it.second << endl;
            if (it.first > ans && it.second == 1) ans = it.first;
        }
        return ans;
        
    }
};