class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        vector<int> sum(arr.size()+1);
        sum[0] = 0;
        for (int i=0;i<arr.size();i++){
            sum[i+1] = sum[i] + arr[i];
        }
        // for (int i=0;i<sum.size();i++){
        //     cout << sum[i] << " ";
        // }cout << endl;
        int len = 1;
        while (len <= arr.size()){
            for (int i=0;i<arr.size()-len+1;i++){
                // cout << (sum[i+len] -sum[i]) << endl;
                ans += (sum[i+len] -sum[i]);
            }
            len += 2;
        }
        return ans;
        
        
    }
};