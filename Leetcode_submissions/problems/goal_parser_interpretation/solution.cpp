class Solution {
public:
    string interpret(string c) {
        string ans = "";
        for (int i=0;i<c.size();i++){
            
            // cout << c[i] << endl;
            if (c[i] == 'G'){
                ans += c[i];
            }else if (i != c.size()){
                if (c[i+1] == 'a'){
                    ans += "al";
                    i+=3;
                }else {
                    ans += "o";
                    i++;
                }
            }
        }
        return ans;
    }
};