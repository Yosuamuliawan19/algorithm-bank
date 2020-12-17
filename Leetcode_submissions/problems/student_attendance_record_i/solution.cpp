class Solution {
public:
    bool checkRecord(string s) {        
        int a = 0;
        for (int i=0;i<s.length();i++){
            if (s[i] == 'A'){
                a ++;
            }else{
                if (i != s.length()-2){
                    if (s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L'){
                        return 0;
                    }    
                }
            }
        }
        // cout << a <<" "<< b << endl;
        return a <= 1;
    }
};