class Solution {
public:
    int cnt[26] = {0};
    int maxNumberOfBalloons(string text) {
        for (char c: text){
            cnt[c-'a'] ++;
        }
        int ans = cnt[1];
        ans = min(ans, cnt[0]);
        ans = min(ans, cnt['l'-'a']/2);
        ans = min(ans, cnt['o'-'a']/2);
        ans = min(ans, cnt['n'-'a']);
        return ans;
    }
};