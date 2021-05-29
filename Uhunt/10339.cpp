#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int gcd(int a, int b){
     if (a == 0 && b == 0) return 0;
     if (a == b) return a;
     if (a > b) return gcd(a-b,b);
     return gcd(a,b-a);
}
int lcm(int a, int b){
     return (a*b)/gcd(a,b);
}
int main (){
     int tot = 43200;
     int a, b, c, d, h, m;
     while (cin >> a >> b){
          if (a == 0) c =(60 % b == 0 ? tot: 60) ;
          else c = tot / a;

          if (b == 0) d = (60 % a == 0 ? tot: 60) ;
          else d = tot / b;

          int ans = lcm(c,d);
          while (ans > tot) ans -= tot;
          h = ans / (60*60);
          ans -=( h * 60 * 60);
          m = ans / (60);
          cout << a << " " << b << " ";
          if (h < 10) cout << 0;
          cout << h << ":";
          if (m < 10) cout << 0;
          cout << m << endl;
     }



     return 0;
}
