class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        // cout << a.second << " " << b.second << endl;
        if (a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
        
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for (int c: nums){
            mp[c] ++;
        }
        vector<pair<int,int>> arr;
        for (auto c: mp){
            arr.push_back(c);
        }
        
        sort(arr.begin(), arr.end(), this->cmp);
        vector<int> ans;
        for (auto c: arr){
            for (int i=0;i<c.second;i++){
                 ans.push_back(c.first);
            }
        }
        return ans;
    }
};