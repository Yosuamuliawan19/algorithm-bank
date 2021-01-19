class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int x = 0, y = 0, ans = 0;
        while (x != g.size() && y != s.size()){
            if (s[y] >= g[x]){
                ans ++; x++; y++;
            }else{
                y++;
            }
        }
        
        
        return ans;
    }
};