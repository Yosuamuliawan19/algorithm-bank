class Solution {
public:
    int len;
    vector<string> ans;
    void solve(string cur, string mir){
        if (cur.length() + mir.length() > len) return;
        if (cur.length() == len && mir.length() == 0){
            cout << cur << endl;
            ans.push_back(cur);
            return;
        }
        // cout << cur << " " << mir <<endl;
        solve(cur+"(", ')'+mir);
        if (mir.length() != 0){
            solve(cur+ mir[0], mir.substr(1,mir.length()));
        } 
    }
    vector<string> generateParenthesis(int n) {
        len = n*2;
        solve("", "");
        return ans;
    }
};