#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll arr[2][220];
int main (){
     ll tc, n, m;
     cin >> tc;
     while (tc--){
          cin >> n >> m;
          // cout << n <<  " " << m << endl;
          for (int i=0;i<2*n;i+=2){
               cin >> arr[0][i] >> arr[1][i];
               cin >> arr[0][i+1] >> arr[1][i+1];
          }


          if (m%2 != 0){
               cout << "NO\n"; continue;
          }

          bool f = 1;
          if ((m/2) % 2 == 1){
               f = 0;
               for (int i=0;i<2*n;i+=2){
                    if (arr[0][i] == arr[1][i+1] && arr[0][i+1] == arr[1][i]){
                         f = 1; break;
                    }
               }
          }


          bool lf = 1, rf = 1;
          if (m/2 > 1){
               if (m/2 >= 3){
                    f = 0;
                    for (int i=0;i<2*n;i+=2){
                         if (arr[0][i] == arr[1][i+1] && arr[0][i+1] == arr[1][i]){
                              f = 1; break;
                         }
                    }
               }
               lf = 0;
               for (int i=0;i<2*n;i+=2){
                    if (arr[0][i] == arr[1][i+1]){
                         lf = 1; break;
                    }
               }
               rf = 0;
               for (int i=0;i<2*n;i+=2){
                    if (arr[0][i+1] == arr[1][i]){
                         rf = 1; break;
                    }
               }
          }



          if (f && lf && rf){
               cout << "YES\n";
          }else{
               cout << "NO\n";
          }
     }




     return 0;
}
