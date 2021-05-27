#include<iostream>
#include<vector>
#include<cmath>
typedef long long ll;
using namespace std;
ll n;
bool cal(ll m){
     if (m == 0) return false;
     ll tmp = n;
     cout << "====\n";
     int tot = 0;
     while (tot < tmp/2){
          n-= m; tot += m;
          n-= (n/10);
          // cout << tot << " "  << n  << endl;
          if (n <= 0){
               n = tmp;
               cout << tot << endl;
               break;
          }
     }
     n  = tmp;
     cout << "t0t = " <<  tot << endl;
     if (tot > n/2){
          return true;
     }else{
          return false;
     }

}
int main (){
     cin >> n;
     ll l=0,r=n,m;
     int cnt = 0;
     while (r >= l){
          cnt ++; if (cnt == 1000) break;
          m = l + (r-l)/2;
          cout <<"m= "<< m << endl;
          if (cal(m)){
               r = m;
          }else{
               l = m;
          }
     }
     cout << m << endl;
}
