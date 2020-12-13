class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for (auto i: arr){
            mp[i] ++;
        }
        int mx = -1;
        for (auto it: mp){
            if (it.first == it.second &&  it.first > mx){
                mx = it.first;
            }
        }
        return mx;
    }
};