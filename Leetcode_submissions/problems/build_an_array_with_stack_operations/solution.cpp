class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int idx = 1;
        vector<string> ans;
        for (int i=0;i<target.size();i++){
             if (idx == target[i]){
                ans.push_back("Push");
                 idx++;
                 continue;
            }
            while (idx != target[i]){
                // cout << idx << " " << target[i] << endl;
                ans.push_back("Push");
                ans.push_back("Pop");
                idx++;
            }
            ans.push_back("Push");
            idx++;
           
        }
        return ans;
    }
};