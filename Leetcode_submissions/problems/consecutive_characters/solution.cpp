class Solution {
public:
    int maxPower(string s) {
        char prev = '?'; int cnt = 0;
        int mx = 0;
        for (int i=0;i<s.length();i++){
            if (s[i] != prev){
                mx = max(mx, cnt);
                prev = s[i];
                cnt = 1;
            }else{
                cnt ++;
            }
            if (i == s.length() -1) mx = max(mx, cnt);
        }
        return mx;
    }
};