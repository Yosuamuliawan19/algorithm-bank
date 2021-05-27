#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
int main (){
     int n, t, s;
     cin >> n >> t >> s;
     double temp;
     for (int i=0;i<n;i++){
          cin >> temp;
          if (temp == s){
               cout << fixed << setprecision(6) << s + (t/2) << endl;
          }else{
               double x = (0.5*(abs(temp - s)) / t )+ ( abs(temp - s) / t);
               cout << "x " << x * 60 << endl;
               if (temp < s){
                    cout << fixed << setprecision(6) << s + (x * t) << endl;
               }else{
                    cout << fixed << setprecision(6) << s + ((1 - x)  * t) << endl;
               }
          }
     }

     return 0;
}
