class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for (int i=0;i<logs.size();i++){
            if (logs[i][0] == '.'){
                if (logs[i][1] == '.' && ans != 0){
                   ans --;
                }
            }else{
                ans++;
            }
            // cout << ans << endl;
        }
        return ans;
    }
};