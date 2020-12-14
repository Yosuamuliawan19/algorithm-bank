class Solution {
public:
    vector<int> ans;
    int target;
    void rec(int d, vector<int> cur){
        if (d == target+1){
            ans = cur;
            return ;
        }
        vector<int> next(d+1, 1);
        for (int i=1;i<d;i++){
            next[i] = cur[i-1] + cur[i];
        }
        rec(d+1, next);
    }
    vector<int> getRow(int rowIndex) {
        target = rowIndex;
        rec(0, vector<int>());
        return ans;
    }
};