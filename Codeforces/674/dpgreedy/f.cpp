#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll tc, m, n, arr[1000], arr2[1000];

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin >> m >> n;
          for (int i=0;i<m-1;i++){
               cin >> arr[i];
          }
          for (int i=0;i<n-1;i++){
               cin >> arr2[i];
          }
          sort(arr, arr+(m-1), greater<ll>());
          sort(arr2, arr2+(n-1), greater<ll>());
          for (int i=0;i<m-1;i++){
               cout << arr[i] << " ";
          }cout << endl;

          for (int i=0;i<n-1;i++){
               cout << arr2[i] << " ";
          }cout << endl;

          m--;n--;
          ll i1 = 0, i2 = 0;
          while (i1 < m && i2 < n){
               
          }
     }
}
