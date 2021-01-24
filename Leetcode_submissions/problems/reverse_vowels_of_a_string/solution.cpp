class Solution {
public:
    void swap(char& a, char& b){
        char tmp = a;
        a = b;
        b = tmp;
    }
    bool isVowel(char a){
        if (a == 'a' || a == 'e' || a == 'u' || a == 'i' || a == 'o') return 1;
        if (a == 'A' || a == 'E' || a == 'U' || a == 'I' || a == 'O') return 1;
        return 0;
    }
    string reverseVowels(string s) {
        int l = 0, r = s.length()-1;
        while (r > l){
           
            while (l < s.length() && !isVowel(s[l]) ) l++;
            while (r >= 0 && !isVowel(s[r])) r--;
            if (l >= r) break;
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++; r--;
        }
        return s;
    }
};