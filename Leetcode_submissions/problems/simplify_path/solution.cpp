class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        string prev = "";
        for (int i=0;i<path.size();i++){
           
            if (path[i] == '/'){
                
                if (prev != ""){
                    cout << prev << endl;
                    if (prev == ".."){
                        if (v.size() != 0) v.pop_back();
                    }else if (prev != "."){
                        v.push_back(prev);
                    }
                }
                prev = "";
                
            }else{
                prev += path[i];
            }
             // cout << prev << endl;
        }
        if (prev != ""){
            if (prev == ".."){
                if (v.size() != 0) v.pop_back();
            }else if (prev != "."){
                 v.push_back(prev);
            }
           
        } 
        string ans = "";
        for (int i=0;i<v.size();i++){
            ans += "/" + v[i];
        }
        if (ans == "") ans = "/";
        return ans;
    }
};