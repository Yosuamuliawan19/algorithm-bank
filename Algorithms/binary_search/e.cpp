#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll m, n;
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     while (cin >> m >> n){
          if (m == 1 && n == 1) break;
          ll l1 = 0, l2 = 1, r1 = 1, r2 = 0;
          double fn = (double) m / (double)n;
          ll x = 0;
          while (1){
               ll top = l1+r1, bot = l2+r2;
               // cout << top << " "<< bot << endl;
               double mid = (double) top / (double) bot;
               if (mid == fn){
                    break;
               }else if (mid > fn){
                    cout << "L";
                    r1 = top;
                    r2 = bot;
               }else{
                    cout << "R";

                    l1 = top;
                    l2 = bot;
               }
               // cout << fn << endl;
               // x ++; if(x==3) break;
          }
          cout << endl;
     }
}
