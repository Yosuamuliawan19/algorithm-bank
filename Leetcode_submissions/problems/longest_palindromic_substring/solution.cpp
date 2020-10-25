class Solution {
public:
    string longestPalindrome(string s) {
        int l, r;
        for (int i=s.length();i>=0;i--){
            // cout << "Tested length: " << i << "\n";
            for (int j=0;j<=s.length()-i;j++){
                // cout << s.substr(j, j+i) << " " << j << " " << j+i << "\n";
                l = j, r = j+i-1; bool f = 1;
                while (r > l){
                    // cout << s[l] <<" " << s[r] << endl;
                    if (s[l++] != s[r--]){
                        f = 0;
                        break;
                    }
                }
                
                if (f){
                    string ans = "";
                    for (int t=j;t<=j+i-1;t++){
                        ans += s[t];
                    }
                    return ans ;
                }
                // cout << f << endl;
            }
        }
        return "";
    }
};