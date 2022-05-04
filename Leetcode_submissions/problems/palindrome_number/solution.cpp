class Solution {
public:
    bool isPalindrome(int x) {
        // base case
        if (x < 0) return 0;
        if (x == 0) return 1;
        
        // convert int to int[]
        int arr[12] = {0};
        int idx = 0;
        while (x != 0){
            arr[idx++] = x % 10;
            x /= 10;
        }
        
        // array compare towards middle
        int l = 0, r = idx-1;
        while (l != r){
            if (arr[l++] != arr[r--]){
                return 0;
            }
            if (l >= r){
                break;
            }
        }
        return 1;
    }
};