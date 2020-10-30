class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int idx = digits.size()-1;
        while (idx != -1){
            digits[idx] ++;
            if (digits[idx] >= 10){
                digits[idx] = 0;
                idx--;
            }else{
                break;
            }
        }
        if (idx == -1){
            vector<int> ans;
            ans.push_back(1);
            for (auto i: digits) ans.push_back(i);
            return ans;
        }
        

        return digits;
    }
};