class Solution {
public:
    bool canPermutePalindrome(string s) {
        map<char, int> arr;
        for (char cur: s){
            arr[cur]++;
        }
        int cnt = 0;
        for (auto cur: arr){
            if (cur.second % 2 == 1) cnt ++;
        }
        return cnt <= 1;
    }
};