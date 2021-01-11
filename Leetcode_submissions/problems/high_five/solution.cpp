class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        if (a[0] == b[0]){
            return a[1] > b[1];
        } 
        return a[0] < b[0];
    }
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        sort(items.begin(), items.end(), cmp);
        vector<vector<int>> ans; 
        int prev = 0, cnt = 0, sum = 0;
        for (int i=0;i<items.size();i++){
            if (prev != items[i][0]){
                cnt = 1;
                prev = items[i][0];
                sum = items[i][1];
            }else{
                cnt ++;
                sum += items[i][1];
            }
            
            if (cnt == 5){
                ans.push_back(vector<int>({prev, (int)sum/5}));
                // printf("%d %d\n", prev, sum/5);
            }
        }
        return ans;
    }
};
