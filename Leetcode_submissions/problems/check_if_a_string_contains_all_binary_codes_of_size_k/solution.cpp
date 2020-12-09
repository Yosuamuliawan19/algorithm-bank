class Solution {
public:
    bool ans = 1;
    int K = 0;
    set<string> st; 
    void gen(string cur, int len) {
        if (!ans) return;
        if (len == K){
            // cout << cur << endl;
            if (st.find(cur) == st.end()){
                ans = 0;
            }
        }else{
            gen(cur+"0", len+1);
            gen(cur+"1", len+1);
        }
    }
    bool hasAllCodes(string s, int k) {
        if (k > s.length()) return 0;
        K = k;
        for (int i=0;i<=s.length()-k;i++){
            st.insert(s.substr(i, k));
            // cout << s[i] << endl;
            // cout << s.substr(i,k) << endl;
        }
        // cout << " --\n";
        gen("", 0);
        return ans;
    }
};