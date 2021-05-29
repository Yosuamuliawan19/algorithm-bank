#include<iostream>
using namespace std;
typedef long long ll;
ll days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
void leap (ll y){
     bool isleap = 0;
     if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
          isleap = 1;
          // cout << y << " is a leap year\n";
     }
     if (isleap){
          days[1] = 29;
     }else{
          days[1] = 28;
     }
}
int main (){

     ll n, d, m, y;
     while (cin >> n >> d >> m >> y){
          if (!n && !d && !m && !y) break;
          d+= n;
          leap(y);
          while (d > days[m-1]){
               d-= days[m-1];
               m++;
               if (m == 13){
                    m = 1;
                    y++;
                    leap(y);
               }
          }
          cout << d << " " << m << " "<< y << endl;
     }


}
