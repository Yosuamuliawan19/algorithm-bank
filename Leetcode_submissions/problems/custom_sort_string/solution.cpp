class Solution {
public:
    
    string customSortString(string S, string T) {
        int arr[26] = {0};
        map<char, int> mp;
        set<char> st;
        for (char c: T){
            mp[c] ++;
        }
        string ans;
        for (char c: S){
            st.insert(c);
            for (int i=0;i<mp[c];i++) ans += c;
        }
        
        for (char c: T){
            if (st.find(c) == st.end()){
                ans += c;
            }
        }
        
        return ans;
    }
};