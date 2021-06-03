#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
#include<math.h>
#include<iomanip>
typedef long long ll;
typedef long double ld;
using namespace std;

int main (){
     string s;
     cin >> s;
     ll x =0,y=0;
     for (int i=0;i<s.length();i++){
          // cout << s[i] << " " ;
          if(s[i] == 'N'){
               x++;
          }else if(s[i] == 'S'){
               x--;
          }else if(s[i] == 'E'){
               y++;
          }else if(s[i] == 'W'){
               y--;
          }
     }
     // cout << x << " " << y << endl;
     cout << abs(x) + abs(y) << endl;
     return 0;
}
