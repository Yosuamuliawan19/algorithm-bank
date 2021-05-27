#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair

int main (){
     ll tc, n, x;
     cin >> tc;
     while (tc--){
          cin >> n >> x;
          if (n <= 2){
               cout << "1\n";
               continue;
          }
          n -= 2;
          cout << 1  + ceil((double)n / (double)x) << endl;
     }




     return 0;
}
