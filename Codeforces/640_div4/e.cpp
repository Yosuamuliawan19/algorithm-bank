#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n;
int arr[8010] = {0};
int special[8010] = {0};

int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++) cin >> arr[i];
          memset(special, 0, sizeof(special));
          for (int l=0;l<n;l++){
               ll sum = arr[l];
               for (int r=l+1;r<n;r++){
                    sum += arr[r];
                    if (sum < 8010){
                         special[sum] = 1;
                    }
               }
          }

          ll ans = 0;
          for (int i=0;i<n;i++){
               if (special[arr[i]] == 1){
                    ans ++;
                    // cout << arr[i] << endl;
               }
          }
          cout << ans << "\n";
          // cout<< endl;
     }
}
