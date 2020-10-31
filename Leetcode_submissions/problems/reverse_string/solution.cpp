class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0 , r = s.size()-1;
        while (r > l){
            // cout << l << " " << r << endl;
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;r--;
        }
    }
};