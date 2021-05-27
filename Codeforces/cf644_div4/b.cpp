#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int mn(int a, int b){
     if (a > b) return b;
     return a;
}
int mx(int a, int b){
     if (a < b) return b;
     return a;
}
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     ll tc, a, b, arr[60], n;
     cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          sort(arr, arr+n);

          ll ans = arr[1]-arr[0];
          for (int i=1;i<n;i++){

               ans = mn(arr[i]-arr[i-1], ans);

          }
          cout<<ans << endl;

     }
}
