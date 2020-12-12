class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        int arr[26] = {0}, arr2[26] = {0};
        for (char c: chars) arr[c-'a'] ++;
        for (auto word: words){
            memset(arr2, 0, sizeof(arr2));
            for (char c: word){
                arr2[c-'a']++;
            }
            bool suc = 1;
            for (int i=0;i<26;i++){
                if (arr2[i] > arr[i]){
                    suc = 0; break;
                }
            }
            if (suc) ans += word.length();
        }
        return ans;
    }
};