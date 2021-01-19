class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ans, ans2;
        for (int a: A){
            if (a % 2 == 0){
                ans.push_back(a);
            }else{
                ans2.push_back(a);
            }
        }
        for (int a: ans2){
            ans.push_back(a);
        }
        return ans;
        
    }
};