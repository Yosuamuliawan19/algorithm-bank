class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s = heights;
        int ans = 0;
        sort(s.begin(), s.end());
        for (int i=0;i<s.size();i++){
            if (s[i] != heights[i]) ans ++;
        }
        return ans; 
    }
};