#include<iostream>
#include<vector>
#include<cmath>
typedef long long ll;
using namespace std;

int main (){
     ll a, b, c, d, h, m;
     ll tot = 43200;
     ll ful = 86400;
     while (cin >> a >> b){
          ll dif = abs(a-b);
          if (dif == 0){
               cout << a << " " << b << " " << "12:00\n";
               continue;
          }
          ll ans = (tot * (ful-a)/dif) % tot + 30;

          h = ans / (60*60);
          ans -=( h * 60 * 60);
          m = ans / (60);
          if (h == 0) h = 12;

          cout << a << " " << b << " ";
          if (h < 10) cout << 0;
          cout << h << ":";
          if (m < 10) cout << 0;
          cout << m << endl;

     }



     return 0;
}
