class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for (int i=0; i<numbers.size(); i++){
            int l = i+1, r = numbers.size()-1;
            int t = target - numbers[i];
            // printf("%d\n", numbers[i]);
            while (r >= l){
                int m = l + (r-l)/2;
                // printf("m = %d\n", numbers[m]);
                if (numbers[m] == t){
                    return vector<int>({i+1, m+1});
                }else if (numbers[m] < t){
                    l = m + 1;
                }else{
                    r = m - 1;
                }
            }
        }
        
        return vector<int>({0,0});
       
    }
};