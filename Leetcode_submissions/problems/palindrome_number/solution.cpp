class Solution {
public:
    bool isPalindrome(int x) {
     if (x < 0) return 0;
     if (x == 0) return 1;
     int arr[12] = {0}, l = 0, r = 0;
     while (x != 0){
          arr[r] = x%10;
          x /= 10;
          r ++;
     }
     r--;
     while (r > l){
          if (arr[r] != arr[l]) return 0;
          l ++; r--;
     }
     return 1;
}
};