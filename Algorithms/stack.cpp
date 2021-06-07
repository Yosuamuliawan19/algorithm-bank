#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     ll stack[1000001];
     ll t, q, n, idx = 0;

     cin >> t;
     while (t--){
          cin >> q;
          if (q == 1){
               cin >> n;
               stack[idx++] = n;
          }else if (q == 2){
               if (idx != 0) idx--;
          }else {
               if (idx == 0){
                    cout << "Empty!\n";
               }else{
                    cout << stack[idx-1] << "\n";
               }
          }
     }

     return 0;
}