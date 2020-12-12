class Solution {
public:
    
    int tribonacci(int n) {
        vector<int> arr(3, 0);
        arr[1] = 1; arr[2] = 1;
        
        if (n < 3){
            return arr[n];
        }
        
        n -= 2;
        while (n--){
            int cur = arr[0] + arr[1] + arr[2];
            arr[0] = arr[1];
            arr[1] = arr[2];
            arr[2] = cur;
        }
        return arr[2];
        
    }
};