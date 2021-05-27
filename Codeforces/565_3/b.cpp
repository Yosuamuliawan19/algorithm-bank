#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main (){
     int t, n, cur;
     cin >> t;
     while (t--){
          int ans = 0, ones = 0, twos = 0;
          cin >> n;
          for (int i=0;i<n;i++){
               cin >> cur;
               if (cur % 3 == 0) ans ++;
               else if (cur % 3 == 1) ones ++;
               else twos ++;
          }
          ans += min(ones, twos);
          ans += ((ones - min(ones, twos)) / 3);
          ans += ((twos - min(ones, twos))  / 3);
          cout << ans << endl;
     }
}
