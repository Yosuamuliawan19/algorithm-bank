class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int sum = 0, n = code.size();
        
        vector<int> ans(n);
        
        for (int i=0;i<n;i++){
            int sum = 0, cnt = 0;
            for (int j=(k>0?i+1:i-1);cnt!=abs(k);){
                if (j == -1){
                    j = n-1;
                }else if (j == n){
                    j = 0;
                }
                // cout << j << endl;
                sum += code[j];
                cnt ++;
                j = (k>0?j+1:j-1);
            }
            ans[i] = sum;
        }
        
        
        return ans;
    }
};