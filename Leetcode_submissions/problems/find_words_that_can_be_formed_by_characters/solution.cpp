class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int arr[26] = {0};
        for (char c: chars){
            arr[c-'a'] ++;
        }
        int ans = 0;
        for (int i=0;i<words.size();i++){
            int arr2[26] = {0};
            for (int j=0;j<words[i].size();j++){
                arr2[words[i][j]-'a']++;    
            }
            bool f = 1;
            for (int j=0;j<26;j++){
                if (arr2[j] > arr[j]){
                    f = 0; break;
                }
            }
            if (f) ans += words[i].length();
        }
        return ans;
       
    }
};