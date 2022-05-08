class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr = vector<int>(200, -1);
        if (s.length() == 0) return 0;
        int mn = 0, ans = 1;
        for (int i=0;i<s.length();i++){
            
            int idx = s[i] - 32;
          
            
            
            if (arr[idx] != -1){
                mn = max(mn, arr[idx] + 1);
            }
            arr[idx] = i;
            ans = max(ans, i-mn+1);
        }
        
        
        return ans;
    }
};