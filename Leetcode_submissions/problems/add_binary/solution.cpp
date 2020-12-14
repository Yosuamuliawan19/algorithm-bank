class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1; 
        int j = b.length() - 1;
        int c = 0;
        string str = "";
        while (i >= 0 || j >= 0 || c == 1) {
            c += i >= 0 ? a[i--] - '0': 0;
            c += j >= 0 ? b[j--] - '0': 0;
            str = (char)((c & 1)+'0') + str;
            c = c >> 1;
        }
        return str;
    }
};