class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        // cout << s << endl;
        vector<char> arr;
        for (int i=0;i<s.length();i++){
            if (s[i] != '-') {
                if (s[i] >= 'a' && s[i] <= 'z'){
                    s[i] -= 32;
                }
                // cout << s[i]  << endl;
                arr.push_back(s[i]);
            }
        }
        string ans = "";
        
        
        int cnt = arr.size() % k; if (cnt == 0) cnt = k;
        
        for (int i=0;i<arr.size();i++){
            cnt--;
            ans += arr[i];
            if (cnt == 0){
                if (i != arr.size()-1)
                ans += '-';
                cnt = k;
            }
        }
        
        
       
        return ans;
    }
};