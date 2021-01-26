class Solution {
public:
    bool alpha(char a){
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) return 1;
        return 0;
    }
    string reverseOnlyLetters(string S) {
        int l = 0, r = S.length()-1;
        char tmp;
        while (r > l){
            while (!alpha(S[l]) && l < r) l++;
            while (!alpha(S[r]) && l < r) r--;
            if (l == r) break;
            tmp = S[l];
            S[l] = S[r];
            S[r] = tmp;
            l++;r--;
        }
        return S;
    }
};