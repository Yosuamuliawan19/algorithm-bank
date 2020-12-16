class Solution {
public:
    double pow(double x, int n){
        if (n == 0) return 1;
        if (n == 1) return x;
        if (n % 2 == 0){
            double ans =  pow(x, n/2);
            return ans * ans;
        }else{
            double ans =  pow(x, n/2);
            return ans * ans * x;
        }
    }
    double myPow(double x, int n) {
        if (n < 0) return 1.0 / pow(x,n);
        return pow(x, n);
    }
};