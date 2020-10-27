class Solution {
public:
    int longestValidParentheses(string s) {
//         cout << s << endl;
//         vector<int> dp = vector<int>(s.length(), 0);
//         if (s[1] == ')' && s[0] == '('){
//             s[1] = 2;
//         }
//         for (int i=2;i<s.length();i++){
//             if (s[i] == ')'){
//                 if (s[i-1] == '(') {
//                     dp[i] = dp[i-2] + 2;
//                 }else{
//                     dp[i] = 0;
//                 }
//             }
//         }
        
//          for (int i=0;i<s.length();i++){
//              cout << dp [i] << " ";
//          }cout << endl;
//         return 1;
        
        
        int maxans = 0;
        vector<int> dp = vector<int>(s.length(), 0);

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == ')') {
                if (s[i-1] == '(') {
                    dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
                } else if (i - dp[i - 1] > 0 && s[i - dp[i - 1] - 1] == '(') {
                    cout << i <<" " << i-dp[i-1] << endl;
                    dp[i] = dp[i - 1] + (
                        (i - dp[i - 1]) >= 2 
                        ? dp[i - dp[i - 1] - 2] 
                        : 0
                    ) + 2;
                }
                maxans = max(maxans, dp[i]);
            }
        }
        for (int i=0;i<s.length();i++){
            cout << dp[i] << " "; 
        }cout <<endl;
        return maxans;
    }
};