#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, n, a[110], b[110], c[110];

ll ans[110] = {0};
bool f = 0;

void solve(ll idx){
     if (f) return;
     if (idx == n-1){
          if (ans[idx] == ans[0]){
               return;
          }else {
               // cout << "found\n";
               f = 1;
               return;
          }
     }
     if (ans[idx] != a[idx+1] && !f){
          // cout << ans[idx]  << " "<< a[idx+1] <<  " " << idx << endl;

          ans[idx+1] = a[idx+1];
          // cout << "hey\n";
          solve(idx+1);
     }
     if (ans[idx] != b[idx+1] && !f){
          // cout << ans[idx]  << " "<< b[idx+1] <<  " " << idx << endl;

          ans[idx+1] = b[idx+1];
          solve(idx+1);
     }
     if (ans[idx] != c[idx+1] && !f){
          // cout << ans[idx]  << " "<< c[idx+1] <<  " " << idx << endl;

          ans[idx+1] = c[idx+1];
          solve(idx+1);
     }
}
void pnt(){
     for (int i=0;i<n;i++){
          cout << ans[i] ;
          if (i != n-1) cout << " ";
     }
     cout << endl;
}
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     while (tc--){
          f = 0;
          cin >> n;
          for (int i=0;i<n;i++){
               cin  >> a[i];
          }
          for (int i=0;i<n;i++){
               cin  >> b[i];
          }
          for (int i=0;i<n;i++){
               cin  >> c[i];
          }
          // cout << "hello\n";


          ans[0] = a[0];
          solve(0);
          if (f) {
               pnt(); continue;
          }

          ans[0] = b[0];
          solve(0);
          if (f) {
               pnt(); continue;
          }

          ans[0] = c[0];
          solve(0);
          if (f) {
               pnt(); continue;
          }



     }

     return 0;
}
