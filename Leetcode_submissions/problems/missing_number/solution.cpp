class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),exp = n*(n+1)/2, act = 0; 
        for (auto i: nums) act += i;
        cout << act << " " << exp << endl;
        return exp-act;
    }
};