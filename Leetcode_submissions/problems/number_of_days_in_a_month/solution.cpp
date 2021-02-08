class Solution {
public:
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int numberOfDays(int y, int M) {
        if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0))){
            arr[1] = 29;
        }
        return arr[M-1];
    }
};