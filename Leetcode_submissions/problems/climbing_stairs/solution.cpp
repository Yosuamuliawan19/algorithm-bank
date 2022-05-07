class Solution {
public:
    int climbStairs(int n) {
        vector<int> arr = vector<int>(n , 0);
        arr[0] = 1;
        for (int i=1;i<n;i++){
            arr[i] = arr[i-1];
            if (i != 1) arr[i] += arr[i-2];
            else arr[i] += 1;
        }
        return arr[n-1];
    }
    
};