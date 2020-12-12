class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        vector<string> in;
        int n = text.length();
        string cur = "";
        for (int i=0;i<n;i++){
            if (text[i] == ' ' || i == n-1){
                if (i == n-1) cur += text[i];
                in.push_back(cur);
                cur = "";
            }else cur += text[i];
        }
        
        
        for (int i=0;i<in.size()-2;i++){
            if (in[i] == first && in[i+1] == second){
                ans.push_back(in[i+2]);
            }
        }
        
        
        return ans;
    }
};