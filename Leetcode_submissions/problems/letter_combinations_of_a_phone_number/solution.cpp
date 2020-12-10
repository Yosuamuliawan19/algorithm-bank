class Solution {
public:
    
    string mp[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans = vector<string>();
    string tmp, input;
    int n;
    
    void solve(int idx, string str){
        if (idx == n){
            if (str != "" ) ans.push_back(str);
            return;
        }
        int cur = input[idx] - '1' - 1;
        for (char dig: mp[cur]){
            solve(idx+1, str+dig);
        }
    }
    vector<string> letterCombinations(string digits) {
        n = digits.length(); input = digits;
        solve(0, "");
        return ans;
    }
};