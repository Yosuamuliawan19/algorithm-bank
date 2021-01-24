class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int cnt = 1;
        for (int i=1;i<s.size();i++){
            if (s[i] == s[i-1]){
                cnt ++;
            }else{
                if (cnt >= 3) 
                ans.push_back(vector<int>({i-cnt,i-1}));
                cnt = 1;
            }
            if (i == s.size()-1){
                 if (cnt >= 3) ans.push_back(vector<int>({i-cnt+1,i}));
            }
        }
        return ans;
    }
};