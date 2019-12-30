class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i=0;i<s.length();i++){
            char next = 'I';
            if (i != s.length()-1){
                next = s[i+1];
            }
            
            
            if (s[i] == 'I'){
               if (next == 'V' ){
                    ans += 4;
                   i++; continue;
               }
                if (next == 'X'){
                    ans += 9;
                    i++; continue;
                }
                ans += 1;
            }else if(s[i] == 'V'){
                ans += 5;
            }else if(s[i] == 'X'){
                 if (next == 'L' ){
                    ans += 40;
                   i++; continue;
               }
                if (next == 'C'){
                    ans += 90;
                    i++; continue;
                }
                ans += 10;
            }else if (s[i] == 'L'){
                ans += 50;
            }else if (s[i] == 'C'){
                if (next == 'D' ){
                    ans += 400;
                   i++; continue;
               }
                if (next == 'M'){
                    ans += 900;
                    i++; continue;
                }
                ans += 100;
            }else if (s[i] == 'D'){
                ans += 500;
            }else{
                ans += 1000;
            }
        }
        return ans;
    }
};