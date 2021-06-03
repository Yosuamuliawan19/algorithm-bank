#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n;
ll a, b, c;

int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;

     while (tc--){
          cin >> a >> b >> c;
          string ans = "";
          // cout << c << " "  << b << " "<< a << endl;
          while (c != 0){
               if (ans == ""){
                    ans += "1";
               }
               ans += "1";
               c--;
          }
          while (b != 0){
               if (ans == ""){
                    ans += "1";
               }
               if (ans[ans.length()-1] == '1'){
                    ans += "0";
               }else{
                    ans += "1";
               }
               b--;
          }
          bool add = false;
          while (a != 0){
               if (ans == ""){
                    ans = "0";
               }
               if (ans[ans.length()-1] == '1'){
                    ans[ans.length()-1] = '0';
                    add = true;
               }else{
                    ans += "0";
               }
               a--;
          }
          if (add) ans += "1";
          cout << ans << "\n";


          ll x =0, y=0, z=0;
          for (int i=0;i<ans.length()-1;i++){
               int cnt = 0;
               if (ans[i] == '1'){
                    cnt ++ ;
               }
               if (ans[i+1] == '1'){
                    cnt ++ ;
               }
               if (cnt == 1){
                    y++;
               }else if (cnt == 2){
                    z ++;
               }else if (cnt == 0){
                    x ++;
               }
          }
          cout << x << " " << y << " " << z << "\n";
     }
}
