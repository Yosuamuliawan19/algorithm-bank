class Solution {
public:
    int maxRepeating(string s, string w) {
        int ans = 0;
        for (int i=0;i<s.size();i++){
            if (s[i] == w[0]){
                int a = i, b = 0;
                while (s[a] == w[b]){
                    // cout << s[a] << " " << w[b] << endl;
                    // cout << a << " " << b << endl;
                    a++;
                    b = (b+1)%(w.size());
                    if (a == s.size()){
                        break;
                    }
                }
                a = a-i;
                ans = max(ans, (int)floor(a/w.size()));
                cout << a << endl;
            }
        }
        return ans;
    }
};