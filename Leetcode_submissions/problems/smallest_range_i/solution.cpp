class Solution {
public:
    int smallestRangeI(vector<int>& A, int k) {
        if (A.size() == 1) return 0;
        sort(A.begin(), A.end());
        if ((A[A.size()-1]- k) <  (A[0] +k)) return 0;
        return (A[A.size()-1]- k) - (A[0] +k) ;
    }
};