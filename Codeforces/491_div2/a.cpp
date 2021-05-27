#include<iostream>
using namespace std;
int main (){
     int a, b, c, n;
     cin >> a >> b >> c >> n;
     if ((c > b || c > a) || (c > n || b > n || a > n) )
     {
          cout << "-1\n";
          return 0;
     }
     int d = a + b - c;
     if (d >= n)
     {
          cout << "-1\n";
          return 0;
     }
     cout << n - d << endl;

}
