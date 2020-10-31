class Solution {
public:
    
    int n;
    vector<string> ans;
    set<string> st;
    
    void gen(string f, string b, int len){
        if (len == n*2){
            string cur = f + b;
            if (st.find(cur) == st.end()){
                ans.push_back(cur);
                st.insert(cur);
            }
            return;
        }
        gen(f + '(' , ')' + b, len +2);

        string cur = f;
        for (int i=0;i<b.length();i++){
            cur += b[i];
            gen(cur, b.substr(i+1, b.length()-i), len);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        this->n = n;
        gen("", "", 0);    
    
        return ans;
    }
};