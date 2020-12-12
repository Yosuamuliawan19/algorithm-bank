class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int sum = 0;
        vector<bool> ans;
        for (auto a: A){
            sum = (sum << 1 | a)%5;
            ans.push_back(sum == 0);
        }
          
        return ans;
    }
};