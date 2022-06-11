#include<bits/stdc++.h>
using namespace std;
bool isMatch(string s, string p) {
     int a = 0, b = 0;
     while (a < s.length()){
          if (s[a] == s[b] || s[b] == '.') continue;
          if (a + 1 < s.length() && s[a+1] == '*') {
               
          }
          a++; b++;
     }
}

int main (){
     string s,p;
     cin >> s >> p;
     cout << isMatch(s,p) << endl;
}
