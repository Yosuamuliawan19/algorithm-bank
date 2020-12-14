class Solution {
public:
    bool arr[26] = {0};
    int countConsistentStrings(string allowed, vector<string>& words) {
        for (char c: allowed){
            arr[c-'a'] = 1;
        }
        int ans = 0;
        for (int i=0;i<words.size();i++){
            int f = 1;
            for (int j=0;j<words[i].size();j++){
                if (arr[words[i][j]-'a'] == 0){
                    f = 0;
                    break;
                }
            }
            // if (f) cout << words[i] << endl;
            ans += f;
        }
        return ans;
    }
};