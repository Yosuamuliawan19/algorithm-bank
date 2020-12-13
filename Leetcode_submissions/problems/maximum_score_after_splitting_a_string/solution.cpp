class Solution {
public:
    int maxScore(string s) {
        int a = 0, b = 0;
        for (auto c: s) if (c == '1') b++;
        int mx = 0;
        for (int i=0;i<s.length()-1;i++){
            if (s[i] == '1') b--;
            else a++;
            mx = max(mx, a+b);
            // cout << a +b <<endl;
        }
        return mx;
        
    }
};