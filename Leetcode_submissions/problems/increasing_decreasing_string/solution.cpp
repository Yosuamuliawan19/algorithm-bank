class Solution {
public:
    string sortString(string s) {
        int n = s.length();
        vector<bool> vis(n, 0);
        sort(s.begin(), s.end());
        int cnt = 0;
        string ans = "";
        while (cnt != n){
            int idx = 0;
            char prev = '?';
            while (idx != n){
                if (s[idx] != prev && !vis[idx]){
                    prev = s[idx];
                    vis[idx] = 1;
                    cnt ++; 
                    ans += s[idx];
                    if (cnt == n ) break;
                }
                idx++;
            }
            if (cnt == n ) break;
            prev = '?';
            idx = n-1;
            while (idx != -1){
                if (s[idx] != prev && !vis[idx]){
                    prev = s[idx];
                    vis[idx] = 1;
                    cnt ++; 
                    ans += s[idx];
                    if (cnt == n) break;
                }
                idx--;
            }
        }
        
        return ans;
        
    }
};