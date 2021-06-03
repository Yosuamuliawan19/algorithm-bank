#include<iostream>
#include<string>
using namespace std;
int main (){
     int a,b,x;
     cin >> a >> b >> x;
     string ans = "";

          bool f = 1;
          if (b > a) f = 0;
          x++;
          while (x != 0){
               x--;
               if (f){
                    a--;
                    ans += '0';
               }else{
                    b--;
                    ans += '1';
               }
               f = !f;
          }
          cout << ans << endl;
          for (int i=0;i<ans.length();i++){
               if (ans[i] == 'a' && a != 0){
                    cout << 'a';
                    while (a--){
                         cout << 'a';
                    }
               }else if (ans[i] == 'b' && b != 9){
                    cout << 'b';
                    while (b--){
                         cout << 'b';
                    }
               }else{
                    cout << ans[i];
               }
          }
          cout << endl;



     return 0;
}
