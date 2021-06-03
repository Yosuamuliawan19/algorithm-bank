#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// typedef long long int;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, k;
ll mod = 1000000007;
string cur, temp;
ll mypow(ll a, ll b){
     if (a == 0) return 0;
     if (b == 0) return 1;
     if (b % 2 == 0){
          ll ans = mypow(a, b/2) % mod;
          return (ans*ans) % mod;
     }
     ll ans = a % mod;
     return (ans * mypow(a, b-1) % mod) % mod;
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     cin >> tc;
     for (ll t=1;t<=tc;t++){
          cin >> n >> k;
          ll a = 0, b = 0, l = 0, r = 0, ans = 0;
          cin >> cur;
          temp = cur;

          for (r=0;r<n;r++){
               if (cur[r] == 'A') a ++;
               else b++;
               if (b > k){
               // if (b - k > a){
                    // cout << "not enough " << r << endl;
                    while (cur[l] != 'B'){
                         a--;l++;
                    }
                    // cout << "ambil " << l << endl;
                    ans += mypow(2, l+1);
                    temp[l] = '_';
                    b--;
                    l++;
               }
          }
          // cout << l << " ------ "<< r << endl;
          for (;l<n;l++){
               // cout << a << " " << b << endl
               if (b > k){
               // if (b - k > a){
                    // cout << "ambil " << l << endl;
                    ans += mypow(2, l+1);
                    temp[l] = '_';
                    b--;
                    l++;
               }

               if (cur[l] == 'A'){
                     a --;
                      // cout<< "reducing a\n";
               }
               else {
                    b--;
                     // cout << "reducing b\n";
               }
          }

          cout <<"Case #" << t << ": " <<ans << endl;
          cout << cur << endl;
          cout << temp << endl;
          // cout << "------\n";

     }    


     return 0;
}
