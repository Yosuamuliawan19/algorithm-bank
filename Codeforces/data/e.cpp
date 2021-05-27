#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
     ll n, x;
     while (cin >> n){
          if (n == 0) break;
          ll idx = 1, stidx = 0, st[1010] = {0};
          for (int i=0;i<n;i++){
               while (stidx != 0 && st[stidx-1] == idx){
                    // cout << idx << endl;
                    idx++;stidx--;
               }
               cin >> x;
               if (x == idx){
                    // cout << idx << endl;
                    idx++;
               }else{
                    st[stidx++] = x;
               }
          }
          bool f = 1;
          for (int i=stidx-1;i>=0;i--){
               if (st[i] == idx){
                    // cout << idx << endl;
                    idx++;
               }else{
                    f = 0;
                    break;
               }
          }
          if (f){
               cout << "yes\n";
          }else{
               cout << "no\n";
          }
     }


     return 0;
}
