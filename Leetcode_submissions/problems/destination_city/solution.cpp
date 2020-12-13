class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, string> mp;
        for (auto i: paths){
            mp[i[0]] = i[1];
        }
        for (auto i: paths){
            for (auto j: i){
                if (mp.find(j) == mp.end()) return j;
            }
        }
        return "";
        
        
        
    }
};