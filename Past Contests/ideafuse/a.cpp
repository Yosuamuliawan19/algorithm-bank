#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<iomanip>
#include<string>
#include<climits>
#include<cmath>
#include<queue>

#define MP(a,b) make_pair(a,b)
#define FI first
#define SE second
#define PB(a,b) push_back(a,b);

typedef long long ll;
using namespace std;
int main (){
     ll tc, n;
     cin >> tc;
     for (int t=1;t<=tc;t++){
          cin >> n;
          ll a, b, c;
          ll sum = 0;
          ll minplay = LLONG_MAX;
          ll maxres = LLONG_MIN;
          for (int i=0;i<10;i++){
               cin >> a >> b >> c;
               a = a + b + c;
               if (a < minplay){
                    minplay = a;
               }
               sum += a;
          }
          for (int i=0;i<n;i++){
               cin >> a >> b >> c;
               a = a + b + c;
               if (a > maxres){
                    maxres = a;
               }

          }
          if (maxres > minplay){
               sum +=  - minplay +  maxres;
          }
          cout << "Case #" << t << ": "<< sum << endl;
     }


}
