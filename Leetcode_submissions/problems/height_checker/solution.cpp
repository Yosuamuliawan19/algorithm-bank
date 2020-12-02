
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s_heights = heights;
        sort(heights.begin(), heights.end());
        
        int ans = 0;
        for (int i=0;i<heights.size();i++){
            if (heights[i] != s_heights[i]) ans ++;
            // cout << heights[i] << " " << s_heights[i] << endl;
        }
            
        return ans;
    }
};
