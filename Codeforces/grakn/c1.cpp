#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair

ll tc, n, l, arr[100010];
double arra[100010], arrb[100010];
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin  >> tc;
     while (tc--){
          cin >> n >> l;
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }

          double curs = 1;
          arra[0] = arr[0];
          for (int i=1;i<n;i++){
               curs ++;
               double t = (double)(arr[i] - arr[i-1]) / curs;
               arra[i] = arra[i-1] + t;
          }

          curs = 1;
         arrb[n-1] = l-arr[n-1];
         for (int i=n-2;i>=0;i--){
              curs ++;
              double t = (double)(arr[i+1] - arr[i]) / curs;
              cout << t << endl;
              arrb[i] = arrb[i+1] + t;
         }


         for (int i=0;i<n;i++){
              cout << arra[i] << " ";
         }cout << endl;
         for (int i=0;i<n;i++){
              cout << arrb[i] << " ";
         }cout << endl;
         cout << "------\n";
     }

     return 0;
}
