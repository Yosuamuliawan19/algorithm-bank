class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> arr;
        for (int i=0;i<S.size();i++){
            if (S[i] == C) arr.push_back(i);
        }
        vector<int> ans;
        for (int i=0;i<S.size();i++){
            int mn = INT_MAX;
            for (int j=0;j<arr.size();j++){
                mn = min(mn, abs(i-arr[j]));
            }
            ans.push_back(mn);
        }
        return ans;
    }
};