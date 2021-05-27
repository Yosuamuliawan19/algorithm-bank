#include<iostream>
#include<iomanip>

using namespace std;
int main (){
     double n , t , s;
     scanf("%lf %lf %lf" , &n, &t, &s);
     double temp;
     for (int i=0;i<n;i++){
          scanf("%lf" ,&temp);
          if ( temp > s){
               double x  = (double)(temp - s ) / t;
               double ans = (double)(x + ((double)(1 - x) * 0.5)) * t;
               cout << fixed << setprecision(6) << s + ans << endl;
          }else if (temp  == s ){
               cout << fixed << setprecision(6) << s +(double)( (double) t / 2) << endl;
          }else{
               double x  = (double)(s - temp ) / t;
               double ans = (double)(x * 0.5) * t;
               cout << fixed << setprecision(6) << s + ans << endl;
          }
     }
     return 0;
}
