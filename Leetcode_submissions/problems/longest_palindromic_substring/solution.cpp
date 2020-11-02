class Solution {
public:
    int x = 0, y = 0;
    bool isPalindrome(int i, int j, string& s){
        while (j > i){
            if (s[i] != s[j]) return 0;
            i++;j--;
        }
        return 1;
    }
    string longestPalindrome(string s) {
        for (int i=0;i<s.length();i++){
            for (int j=s.length()-1;j>=i;j--){
                // cout << s.substr(i, j-i+1) << endl;
                if (j-i > y-x && isPalindrome(i, j, s)){
                    x = i; y = j;
                }
            }
        }
        return s.substr(x, y-x+1);
    }
};