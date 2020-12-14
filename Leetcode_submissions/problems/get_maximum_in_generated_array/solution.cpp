class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> arr(n+10);
        arr[1] = 1;
        for (int i=0;2*i<=n;i++){
            if (2*i >= 2 && 2 *i <= n){
                arr[2*i] = arr[i];
                arr[2*i+1] = arr[i] + arr[i+1];
            }
        }
        int mx = 0;
        for (int i=0;i<=n;i++){
            mx = max(mx, arr[i]);
        }
        return mx;
    }
};