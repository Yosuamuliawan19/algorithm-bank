#include<iostream>
#include<cmath>
using namespace std;
int main (){
     int a, b, x;
     cin >> a >> b >> x;

     string ans = "";
     bool f = 1;
     if (a > b) f = 0;
     x++;
     while (x--){
          if (f){
               b--;
               ans += '1';
          }else{
               a--;
               ans += '0';
          }
          f = !f;
     }
     for (int i=0;i<ans.length();i++){
          char e = ans[i];
          cout << e;
          if (e == '0' && a > 0){
               while (a--) cout << '0';
          }
          if (e == '1' && b > 0){
               while (b--) cout << '1';
          }
     }
     cout << endl;



     return 0;
}
