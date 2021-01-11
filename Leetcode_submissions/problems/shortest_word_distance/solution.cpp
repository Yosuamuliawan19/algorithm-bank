class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int ans = INT_MAX;
        for (int i=0;i<words.size();i++){
            if (words[i] == word1){
                for (int j=0;j<words.size();j++){
                    if (words[j] == word2){
                        ans = min(ans, abs(j-i));
                    }
                }
            }
        }
        return ans;
    }
};