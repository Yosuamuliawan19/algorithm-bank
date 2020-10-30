class Solution {
public:
    bool isPowerOfThree(int n) {
        if (!n) return 0;
        while (n != 0 && n % 3 == 0){
            // cout << n << endl;
            n /= 3;
        }
        return (n == 1 || n%3 == 0);
    }
};