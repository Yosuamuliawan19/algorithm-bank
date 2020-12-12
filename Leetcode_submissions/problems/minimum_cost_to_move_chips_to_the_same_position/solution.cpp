class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int o = 0, e = 0;
        for (auto i: position){
            if (i%2==0) e ++;
            else o++;
        }
        return min(o,e);
    }
};