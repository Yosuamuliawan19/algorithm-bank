class Solution {
public:
    void swap(char& a, char&b){
        char tmp = a;
        a = b;
        b = tmp;
    }
    string reverseStr(string s, int k) {
        for (int i=0;i<s.length();i+=(2*k)){
            int l=i, r= min((int)s.length()-1, i+k-1);
            while (r > l){
                swap(s[l++], s[r--]);
            }
        }
        return s;
    }
};