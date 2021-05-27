#include<iostream>
#include<iomanip>

using namespace std;
typedef long long ll;
int main(){
     ll n, m;
     cin >> n >> m;
     ll a, b, fact =0, fact2 =0;
     ll tot = 0;
     for (int i=n-1;i>0;i--){
          fact += i;
     }
     if (n%2==0){
          for (int i=1;i<=n/2;i++){
               fact2 += 2*i;
               if (i == n/2) fact2 -= i;
          }
     }else{
          for (int i=1;i<=n/2;i++){
               fact2 += 2*i;
          }
     }
     for (int i=0;i<m;i++){
          cin >> a >> b;
          tot += a * n;
          if (b >= 0){
               tot += b * fact;
          }else{
               tot += b * fact2;
          }
     }
     cout << fixed << setprecision(9) << (double) tot / (double) n << endl;




     return 0;
}
