class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mp; 
        int idx = 0;
        vector<vector<string>> ans;
        
        for (string cur: strs){
            string scur = cur;
            sort(scur.begin(), scur.end());
            
            if (mp.find(scur) != mp.end()){
                ans[mp[scur]].push_back(cur);
            }else{
                mp[scur] = idx++;
                ans.push_back(vector<string>());
                ans[idx-1].push_back(cur);
            }
        }
        return ans;
        
    }
};