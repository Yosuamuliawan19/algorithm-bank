#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
#include<math.h>
#include<iomanip>
#include<climits>

typedef long long ll;
typedef long double ld;
using namespace std;
ll n , s;
int main (){
     cin >> n >> s;
     ll x = s + n;
     ll l = -n, r = n;
     if (x % 2 != 0 || abs(s) > n ){
          cout << "NO\n";
          return 0;
     }
     bool suc = false;

     while (r >= l){
          ll a = l + (r-l)/2;
          ll cur = 2 * a;
          // cout << a << " ";
          if (r == x || l == x){
               suc = true;
               break;
          }
          
          if (cur == x){
               suc = true;
               break;
          }else if (cur > x){
               r = a -1;
          }else{
               l = a +1;
          }
     }

     if (suc){
          cout << "YES\n";
     }else{
          cout << "NO\n";
     }
     return 0;
}
