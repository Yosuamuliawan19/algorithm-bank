#include<iostream>
#include<string>
using namespace std;
int main (){
     int a, b, x;
     cin >> a >> b >> x;
     bool f = 1;
     if (a > b) f = 0;


     string ans = "";
     while (x!= 0){
          if (f){
               b--;
               ans += '1';
          }else{
               a--;
               ans += '0';
          }
          x--;
          f = !f;
     }
     for (int i=0;i<ans.length();i++){
          if (ans[i] == '0' && a != 0){
               while (a--) cout << '0';
               cout << '0';
          }else if (ans[i] == '1' && b != 0){
               while (b--) cout << "1";
               cout << '1';
          }else{
               cout << ans[i] ;
          }
     }
     cout  << endl;



     return 0;
}
