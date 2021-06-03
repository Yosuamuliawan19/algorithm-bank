#include<iostream>
#include<cmath>

typedef long long ll;
typedef long double ld;

using namespace std;
int main (){
     ld n, m;
     cin >> n >> m;
     ld inAngle = (n-2) * 180 / n;
     ld minAngle = inAngle / (n-2);

     cout << "2 1 " ;
     ld res = n-2;
     for (int i=n;i>2;i--){
          // cout << i << " " << (i-2) * minAngle << endl;
          if (
               abs((i-2)* minAngle - m ) < abs(res*minAngle - m)){
               res = i-2;
          }
     }
     cout << res + 2 << endl;
     return 0;
}
