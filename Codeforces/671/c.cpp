#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll n, arr[100010], ans[100010];

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     sort(arr, arr+ n);
     ll idx = 0;
     for (int i=1;i<n;i+=2){
          ans[i] = arr[idx++];
     }
     for (int i=0;i<n;i+=2){
          ans[i] = arr[idx++];
     }
     ll anss = 0;
     for (int i=1;i<n;i+=2){
          if (ans[i-1] > ans[i] && ans[i] < ans[i+1]){
               anss++;
          }
     }
     cout << anss << "\n";
     for (int i=0;i<n;i++){
          cout << ans[i];
          if (i!=n-1) cout << " ";
     }
}
