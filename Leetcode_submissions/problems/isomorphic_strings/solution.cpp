class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp; 
        for (int i=0;i<s.length();i++){
            if (mp.find(s[i]) == mp.end())
            mp[s[i]] = t[i];
            else {
                if (mp[s[i]] != t[i]) return 0;
            }
        }
        map<char, char> mp2; 
        for (int i=0;i<s.length();i++){
            if (mp2.find(t[i]) == mp2.end())
            mp2[t[i]] = s[i];
            else {
                if (mp2[t[i]] != s[i]) return 0;
            }
        }
        return 1;
    }
};