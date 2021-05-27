#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<iomanip>
#include<string>
#include<climits>
#include<math.h>
#include<algorithm>
#include<cmath>


#define MP(a,b) make_pair(a,b)
#define FI first
#define SE second
#define PB(a,b) push_back(a,b);

typedef long long ll;
using namespace std;
int main (){
     ll tc, n;
     string s;


     cin >> tc ;
     for (int t=1;t<=tc;t++){
          vector<ll> arr(26, 0);
          cin >> n >> s;
          for (int i=0;i<n;i++){
               arr[s[i]-65]++;
          }
          if (n % 2 == 1){
               cout << "Case #"<< t << ": 1\n";
               continue;
          }

          sort(arr.begin(), arr.end());
          ll ans;
          for (int i=25;i>=0;i--){
               if (i == 25){
                    ans = arr[i];
                    continue;
               }

               if (arr[i] == 0) break;
               if (arr[i] % 2 == 1) {
                    ans = 1;
                    break;
               }

               ans = __gcd(ans, arr[i]);

          }
          cout << "Case #" << t << ": " << ans << "\n";


     }

}
