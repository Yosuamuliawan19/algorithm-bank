class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mp;
        vector<vector<string>> ans;
        int idx = 0;
        for (int i=0;i<strs.size();i++){
            string a = strs[i];
           
            sort(a.begin(), a.end());
             cout << a << " " << strs[i] << endl;
            if (mp.find(a) != mp.end()){
                ans[mp[a]].push_back(strs[i]);
            }else{
                mp[a] = idx++;
                ans.push_back(vector<string> ());
                ans[idx-1].push_back(strs[i]);
            }
        }
        return ans;
    }
};