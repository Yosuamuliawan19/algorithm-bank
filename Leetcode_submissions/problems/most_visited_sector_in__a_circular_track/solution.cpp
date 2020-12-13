class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int a = rounds[0], b =  rounds[rounds.size()-1];
        vector<int>ans;
        
        for (int i=a;;){
            if (i == b){
                ans.push_back(b);
                break;
            }
            ans.push_back(i);
            i++; if (i == n+1) i = 1;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};