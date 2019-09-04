class Solution {
public:
    int input_size = 0;
    vector<int> input;
    vector<vector<int>> output;
    
    void solve(vector<int> ans, int index, int bitmask){
        if (index == input_size){
            output.push_back(ans);
            return;
        }
        for (int i=0;i<input_size;i++){
            if (! ((bitmask) & (1<<i))){
                ans[index] = input[i];
                solve(ans, index+1, (bitmask) | (1<<i));
            }
        }
    }   
    vector<vector<int>> permute(vector<int>& nums) {
        input = nums;
        input_size = nums.size();
        vector<int> ans = vector<int>(input_size, 0);
        solve(ans, 0, 0);
        return output;
    }
};