#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
int main(){
     ll n, tot = 0, tmp, ans = 0;
     cin >> n;
     while (n--){
          cin >> tmp;
          tot += tmp;
          if (tot < 0){
               if (abs(tot) > ans){
                    ans = abs(tot);
               }
          }
     }
     cout << ans << endl;

}
