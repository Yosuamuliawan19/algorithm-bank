class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length() - 1;
        while (r > l){
            while (!isalnum(s[l]) && l <= r) l++;
            while (!isalnum(s[r]) && l <= r) r--;
            if (l >= r) break;
            // cout << s[l] << " " << s[r] << endl;
            if (toupper(s[l]) != toupper(s[r])) return 0;
            l++;r--;
        }
        return 1;
    }
};