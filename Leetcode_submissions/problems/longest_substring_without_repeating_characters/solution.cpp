class Solution {
public:
    
    int conv(char c){
        return c - 32;
    }
    int lengthOfLongestSubstring(string s) {
        bool vis[200];
        int ans = 0;
        for (int i=0;i<s.length();i++){
            memset(vis, 0, sizeof(vis));
            int len = 1; vis[conv(s[i])] = 1;
            for (int j=i+1;j<s.length();j++){
                if (vis[conv(s[j])]) break;
                len++; vis[conv(s[j])] = 1;
            }
            ans = max(ans, len);
        }
        return ans;
    }
};