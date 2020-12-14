class Solution {
public:
    char slowestKey(vector<int>& rt, string keys) {
        int mx = rt[0]; char ans = keys[0];
        for (int i=1;i<rt.size();i++){
            int cur = rt[i]-rt[i-1];
            if (cur > mx){
                mx = cur;
                ans = keys[i];
            }else if (cur == mx){
                if (keys[i] > ans) {
                    ans = keys[i];
                }
            }
        }
        return ans;
    }
};