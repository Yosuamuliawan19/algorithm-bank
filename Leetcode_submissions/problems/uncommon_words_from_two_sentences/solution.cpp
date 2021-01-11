class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> ans;
        map<string, int> mp;
        string prev = "";
        for (int i=0;i<A.length();i++){
            if (A[i] == ' '){
                mp[prev] ++;
                cout << prev << endl;
                prev = "";
            }else{
                prev += A[i];
            }
            if (i == A.length()-1){
                mp[prev] ++;
                prev = "";
            }
        }
        for (int i=0;i<B.length();i++){
            if (B[i] == ' '){
                mp[prev] ++;
                prev = "";
            }else{
                prev += B[i];
            }
            
            if (i == B.length()-1){
                mp[prev] ++;
                prev = "";
            }
        }
        for (auto cur: mp){
            if (cur.second == 1){
                ans.push_back(cur.first);
            }
        }
        return ans;
    }
};