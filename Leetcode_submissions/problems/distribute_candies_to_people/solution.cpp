class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int cur = 1, i = 0;
        vector<int> ans = vector<int>(num_people, 0);
        while (candies != 0){
            if (candies >= cur){
                ans[i++] += cur;
                if (i == num_people) i = 0;
                candies -= cur;
                cur ++;
            }else{
                ans[i] += candies;
                candies = 0;
            }
        }
        return ans;
    }
};