#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(NULL);
     ll t, a, b, q[1000010] = {0}, l=0, r=0;
     cin >> t;
     while (t--){
          cin >> a;
          if (a == 1){
               cin >> b;
               q[r++] = b;
          }else if (a == 2){
               if (l != r){
                    l++;
               }
          }else{
               if (l == r){
                    cout << "Empty!\n";
               }else{
                    cout << q[l] << "\n";
               }
          }
     }


     return 0;
}
