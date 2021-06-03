#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll tc, n;
ll arr[2000] = {0};
int main(){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     cin >> tc;
     while (tc--){
          memset(arr, 0, sizeof(arr));
          cin >> n;
          ll a = 0, b = 0, x = 0, y = n-1, mv = 0, preva = 0, prevb = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          while (y>=x){
               preva = 0;
               while (preva <= prevb){
                    a+= arr[x];
                    preva += arr[x];
                    // cout << "a " << arr[x] << "\n";
                    x++;
                    if (y<x) break;
               }
               mv++;
               if (y<x) break;
               prevb = 0;
               while (prevb <= preva){
                    b+= arr[y];
                    prevb += arr[y];
                    // cout << "b " << arr[y] << "\n";
                    y--;
                    if (y<x) break;
               }
               mv++;
          }
          cout << mv << " " << a << " " << b << endl;

     }
}
