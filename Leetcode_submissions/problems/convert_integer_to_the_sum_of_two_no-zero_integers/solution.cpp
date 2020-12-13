class Solution {
public:
    int isZero(int i){
        while (i != 0){
            if (i%10 == 0) return 0;
            i/= 10;
        }
        return 1;
    }
    vector<int> getNoZeroIntegers(int n) {
        for (int i=1;i<n;i++){
            int a = i, b = n-i; 
            if (isZero(a) && isZero(b)){
                return vector<int>({a,b});
            }
        }
        return vector<int>({0,n});
    }
};