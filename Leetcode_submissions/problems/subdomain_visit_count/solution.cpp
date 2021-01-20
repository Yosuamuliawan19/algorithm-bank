class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> mp;
        vector<string> ans;
        for (string s: cpdomains){
            string cur = "";
            int amt = 0;
            for (int i=0;i<s.size();i++){
                if (s[i] == ' ') break;
                amt = (amt * 10) + (s[i]-'0');
                
            }
            for (int i=s.size()-1;i>=0;i--){
                if (s[i] == '.' || s[i] == ' '){
                    mp[cur] += amt;
                    if (s[i] == ' ') break;
                }
                cur = s[i]  + cur;
            }
        }
        
        
        
        
        for (auto it: mp){
            // cout << it.first << "  " << it.second << endl;
            
            ans.push_back(  to_string(it.second) + " " + it.first);
        }
        
        return ans;
    }
};