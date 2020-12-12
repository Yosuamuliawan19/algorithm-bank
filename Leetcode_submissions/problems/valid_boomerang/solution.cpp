class Solution {
public:
    bool isBoomerang(vector<vector<int>>& s) {
        if (s[0] == s[1] || s[0] == s[2] || s[1] == s[2]) return 0;
        return ((double)(s[1][1]-s[0][1]) / (double)(s[1][0]-s[0][0])) !=  ((double)(s[2][1]-s[1][1]) / (double)(s[2][0]-s[1][0]));
    }
};