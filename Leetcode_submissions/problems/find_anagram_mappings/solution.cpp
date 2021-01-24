class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        map<int,int> mp;
        for (int i=0;i<B.size();i++){
            mp[B[i]] = i;
        }
        vector<int> ans;
        for (int i=0;i<A.size();i++){
            ans.push_back(mp[A[i]]);
        }
        return ans;
    }
};