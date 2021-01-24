class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0}, arr2[26] = {0};
        for (char a: ransomNote) arr[a-'a']++;
        for (char a: magazine) arr2[a-'a']++;
        for (int i=0;i<26;i++){
            if (arr[i] > arr2[i]) return 0;
        }
        return 1;
    }
};