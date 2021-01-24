class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26] = {0}, arr2[26] = {0};
        for (char a: s) arr[a-'a']++;
        for (char a: t) arr2[a-'a']++;
        for (int i=0;i<26;i++){
            if (arr2[i] > arr[i]) return (char) i+'a';
        }
        return 'a';
    }
};