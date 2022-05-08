class Solution {
public:
    int arr[1001][1001];
    int n, m;
    string t1, t2;
    int dp(int i, int j){
        if (i == -1 || j == -1) return 0;
        if (arr[i][j] != -1) return arr[i][j];            
        if (t1[i] == t2[j]) return arr[i][j]  = 1 + dp(i-1, j-1);
        
        return arr[i][j] = max(dp(i, j-1), dp(i-1, j));
    }
    int longestCommonSubsequence(string text1, string text2) {
        for (int i=0;i<=text1.length();i++){
            for (int j=0;j<=text2.length();j++) arr[i][j] = -1;
        }    
        n = text1.length(); m = text2.length();
        t1 = text1; t2 = text2;
        
        return dp(n-1, m-1);
    }
};