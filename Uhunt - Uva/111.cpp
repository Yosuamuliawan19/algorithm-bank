#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, mp[30] = {0}, x, arr[30] = {0}, d[30] = {0};
void lis(){
     for (int i=0;i<n;i++){
          cout << arr[i] << " ";
     }cout << endl;

     d[0] = 1;
     for (int i=1;i <n;i++){
          d[i] = 1;
          cout << arr[i] << endl;
          for (int j=0;j<i;j++){
               if (arr[i] > arr[j]){
                    cout << arr[i] << "  " << arr[j] << " " << d[j] <<  endl;
                    d[i] = max(d[i], d[j]+1);
               }
          }
     }
     ll ans = 0;
     for (int i=0;i<n;i++){
          ans = max(ans, d[i]);
          // cout << d[i] << " ";
     }
     cout << ans <<"\n";
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     while (cin >> n){
          for (int i=0;i<n;i++){
               cin >> x;
               mp[x] = i;
          }
          ll idx = 0;
          while (cin >> x){
               arr[idx++] = mp[x];
               for (int i=1;i<n;i++){
                    cin >> x;
                    arr[idx++] = mp[x];
               } idx = 0;
               lis();
          }
     }
     return 0;
}
