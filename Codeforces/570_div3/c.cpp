#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, k, n, a, b;
int binser(){
     ll left = 0, right = n;
     while (left <= right){
          ll m = left +  (right - left) / 2;
          ll res = ((m * a) + ((n-m)*b));
          // cout << left << " " <<  m << " " << right << " " << res <<  endl;

          if (res >= k) {
               right = m - 1;
          }else{

               left = m + 1;
          }
     }
     // cout << right << endl;
     return right;


}
int main (){

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> k >> n >> a >> b;
          if (k <= b*n){
               cout << -1 << "\n"; continue;
          }

          cout << binser() << endl;

     }



     return 0;
}
