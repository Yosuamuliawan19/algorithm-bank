#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iomanip>


using namespace std;
typedef long long ll;
double n, load;
double t[1000] = {0};
double l[1000] = {0};

double check (double ld){
     double x = ld;
     for (int i=0;i<n-1;i++){
          x = x - (x/t[i]);
          x = x - (x/l[i+1]);
     }
     x = x - (x / t[-1+(int)n]);
     x = x - (x / l[0]);
     return x;
}
int main (){

     cin >> n >> load;
     for (int i=0;i<n;i++){
          cin >> t[i];
     }
     for (int i=0;i<n;i++){
          cin >> l[i];
     }
     double l = 0, r = 10e9, m;
     int iter = 0;
     while (r >= l){
          iter++; if (iter == 1000) break;
          m = l + (r-l)/2;
          double cur = check(m+load);
          // cout << setprecision(2) << fixed
          //  << cur << " "<< l << " " << r << " " << m  <<  endl;
          if (cur > load){
               r = m;
          }else{
               l = m;
          }
     }
     if (m == 10e9) m = -1;
     cout << setprecision(6) << fixed <<  m << endl;




     return 0;
}
