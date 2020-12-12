class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int ans = 0, idx = 0, n = A.size();
        sort(A.begin(), A.end());
        while (K != 0 && idx < n && A[idx] < 0){
            A[idx] = -A[idx];
            idx++;
            K--;
        }
        for (auto i: A){
            printf("%d ", i); 
        }printf("\n%d\n", K);

        if (K%2 != 0){
            sort(A.begin(), A.end());
            if (n > 0)
            A[0] = -A[0];
        }
    
        
        for (int i=0;i<n;i++) ans += A[i];
        return ans;
    }
};