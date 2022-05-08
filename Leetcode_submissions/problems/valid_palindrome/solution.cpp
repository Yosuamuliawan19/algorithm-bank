class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length()-1;
        while (r > l){
            
            if (!((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z')  || (s[l] >= '0' && s[l] <= '9')) ){
                l++; continue;
            }
            if (!((s[r] >= 'A' && s[r] <= 'Z') || (s[r] >= 'a' && s[r] <= 'z') || (s[r] >= '0' && s[r] <= '9')) ){
                r--; continue;
            }
            char a = s[l] >= 'a' ? s[l]-32: s[l];
            char b = s[r] >= 'a' ? s[r]-32: s[r];
        
            // cout << s[l] << "  " << s[r] << endl;
            // cout << a << "  " << b << endl;
            if (a != b) return false;
            
            r--; l++;
        }
        return true;
    }
};