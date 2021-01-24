class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a = "", b = "";
        int x = 0, y = 0;
        for (char c: S){
            if (c == '#'){
                x--;
                if (x < 0) x = 0;
            }else{
                if (x < a.length()){
                    a[x++] = c;
                }else{
                    a += c; x++;
                }
            }
        }
        
        for (char c: T){
            if (c == '#'){
                y--;
                if (y < 0) y = 0;
            }else{
                if (y < b.length()){
                    b[y++] = c;
                }else{
                    b += c; y++;
                }
            }
        }
//         
        a = a.substr(0, x);
        b = b.substr(0, y);
        // cout << a << " " << b << endl;
        return a == b;
        
    }
};