#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

double n, t, arr[1010][2];
int main (){
     cin.tie(NULL);
     ios_base::sync_with_stdio(false);
     ll ba = LLONG_MAX;
     cin >> n >> t;
     for (int i=0;i<n;i++){
          cin >> arr[i][0] >> arr[i][1];
          if (arr[i][1] < ba) ba = arr[i][1];
     }
     // cout << ba << endl;
     cout << fixed << setprecision (9);
     double l = -ba, r = 10000010;
     double m;
     ll iter = 0;
     // cout << t << endl;
     while (1){
          iter++;if(iter > 10000)break;
          m = (l+r)/2;
          double et = 0;
          for (int i=0;i<n;i++){
               et += arr[i][0] / (arr[i][1] + m);
          }
          // cout << m << " " << et << " "<< t << endl;
          if (et > t){
               l = m;
          }else{
               r = m;
          }
          if (et == t) break;
     }
     cout << m << endl;
}
