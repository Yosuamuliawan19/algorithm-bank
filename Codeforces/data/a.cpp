#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tc, a, b;
ll l=0, r=0, arr[1000100];
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin >> tc;
     // cout << tc << endl;
     while (tc--){
          cin >> a;
          if (a == 1){
               cin >> arr[r];
               r++;
          }else if (a == 2){
               if (l!=r){
                    l++;
               }
          }else{
               if (l==r) cout << "Empty!\n";
               else cout << arr[l] << "\n";
          }
     }


     return 0;
}
