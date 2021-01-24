class Solution {
public:
    string ans = "";
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int arr[26] = {0}, arr2[26] = {0} ;
        for (char c: licensePlate) {
            if (c >= 'a' && c <= 'z') arr[c-'a'] ++;
            else if (c >= 'A' && c <= 'Z') arr[c+32-'a'] ++;
        }
        for (string cur: words){
            memset(arr2, 0, sizeof(arr2));
            for (char c: cur){
                if (c >= 'a' && c <= 'z') arr2[c-'a'] ++;
                else if (c >= 'A' && c <= 'Z') arr2[c+32-'a'] ++;
            }
            bool f = 1;
            for (int i=0;i<26;i++){
                if (arr2[i] < arr[i]){
                    f = 0; break;
                }
            }
            if (f){
                if (ans == "" || cur.size() < ans.size()){
                    ans = cur;
                }
            }
        }
        return ans;
    }
};