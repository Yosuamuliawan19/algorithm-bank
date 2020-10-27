class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") return 0;
        if (needle.length() > haystack.length()) return -1;
        
        int n = haystack.length(), m = needle.length();
        for (int i=0;i<n-m+1;i++){
            int len = 0;
            while (haystack[i+len] == needle[len]){
                len ++;
                if (len == m) return i;
            }
        }
        return -1;
    }
};