class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        string cur = "";
        set<string> st;
        for (string s: banned) st.insert(s);
        
        map<string, int> mp;
        for (int i=0;i<p.size();i++){
            if (p[i] >= 'A' && p[i] <= 'Z'){
                cur += (p[i]+32);   
            }else if (p[i] >= 'a' && p[i] <= 'z'){
                 cur += (p[i]);
            }else {
                if (cur != "" && st.find(cur) == st.end()){
                    mp[cur] ++;
                }
                cur = "";
            }
        }
        if (cur != "" && st.find(cur) == st.end()){
            mp[cur] ++;
        }
        string ans = ""; int amt = 0;
        for (auto it: mp){
            
            if (it.second > amt){
                ans = it.first;
                amt = it.second;
            }
            // cout << it.first << " " << it.second << endl;
        }
        
        return ans;
    }
};