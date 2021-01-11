class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ans;
        int l = 0, r = S.length();
        for (int i=0;i<S.length();i++){
            if (S[i] == 'I'){
                ans.push_back(l++);
            }else{
                ans.push_back(r--);
            }
        }
        ans.push_back(l);
        return ans;
    }
};