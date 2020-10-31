bool cmp( string &a, string &b){
    int x = 0, y = 0;
    
    while (a[x] != ' ') x++;
    while (b[y] != ' ') y++;
    string c = a.substr(x, a.length()-x), d = b.substr(y, b.length()-y);
    if (c == d){
        return a.substr(0, x) < b.substr(0, y);  
    }
    return c < d;
}
class Solution {
public:
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<int> digIdx; 
        vector<string> ans;
        for (int i=0;i<logs.size();i++){
            string& cur = logs[i];
            if (cur[cur.length()-1] >= '0' &&  cur[cur.length()-1] <= '9'){
                digIdx.push_back(i);
            }else{
                ans.push_back(cur);
            }
        }
        
        sort(ans.begin(), ans.end(), cmp);
        
        for (int i:digIdx){
            ans.push_back(logs[i]);
        }
        return ans;
    }
};