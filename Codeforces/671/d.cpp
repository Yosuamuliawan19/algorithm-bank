#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
ll n, m, tc, arr[100010];
int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     cin >> tc;
     while (tc--){
          cin  >> n >> m;
          ll tot = 0 ;

          ll tot2 = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
               if (arr[i] == m) tot2++ ;
               tot += (arr[i] - m);
          }
          if (tot2 == n){
               cout << "0\n";
          }else{
               if (tot == 0 || tot2 > 0){
                    cout << "1\n";
               }else{
                    cout << "2\n";
               }
          }


     }

}
