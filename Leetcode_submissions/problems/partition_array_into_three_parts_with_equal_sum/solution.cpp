class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = 0, n = A.size();
        for (int i=0;i<n;i++){
            sum += A[i];
        }
        if (sum % 3 != 0) return 0;
        sum /= 3;
        
        
        
        int cur = 0, cnt = 0;
        for (int i=0;i<n;i++){
            cur += A[i];
            if (cur == sum){
                cur = 0;
                cnt ++;
            }
        }
        return sum == 0 ? cnt >= 3 : cnt == 3;
    }
};