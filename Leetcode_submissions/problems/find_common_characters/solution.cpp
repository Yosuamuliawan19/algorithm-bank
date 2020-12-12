class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ans;
        string tmp;
        int n = A.size(), cur = 0;
        vector<vector<int> > cnt = vector<vector<int> > (n, vector<int>(26,0));
        for (int i=0;i<n;i++){
            for (int j=0;j<A[i].length();j++){
                cnt[i][A[i][j] - 'a'] ++;
            }
        }
        for (int j=0;j<26;j++){
            cur = INT_MAX;
            for (int i=0;i<n;i++){
                cur = min(cur, cnt[i][j]);
            }    
            tmp = (char)(j+'a');
            while (cur --){
                ans.push_back(tmp);
            }
        }
        
        return ans;
    }
};