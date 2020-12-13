class Solution {
public:
    string reformat(string s) {
        string a = "", b = "";
        for (char c: s){
            if (c <= '9'){
                a+=c;
            }else{
                b+=c;
            }
        }
        string ans = "";
        int x = a.length() - b.length(); if(x<0) x =-x;
        
        if (x > 1) return "";
        
        if (a.length() > b.length()){
            string tmp = a;
            a = b;
            b = tmp;
        }
        cout << a.length() << " " <<  b.length() <<endl;
        cout << a << " " << b << endl;
        for (int i=0;i<a.length();i++){
            ans = ans + (char) b[i] + (char)a[i];
        }
        if (a.length() != b.length()) ans += b[b.length()-1];
      
        
        
    
        return ans;
    }
};