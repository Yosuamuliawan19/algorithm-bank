class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "";
        for (auto c:s) ans += " ";
        for (int i=0;i<s.length();i++){
            ans[indices[i]] = s[i];
        }
        return ans; 
    }
};