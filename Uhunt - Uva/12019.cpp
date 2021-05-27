#include<iostream>
using namespace std;
int main (){
     int tc,m,d;
     int mo[12] =  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
     cin >> tc;
     while (tc--){
          cin >> m >> d;
          if (m < 4 || (m == 4 && d < 4)){
               // cout <<"---\n";
               int day = 0;
               while (m != 1){
                    m--;
                    day += mo[m-1];
               }
               // cout << "day " << day << endl;
               day += (31-13) + d;
               cout << days[day%7] << endl;
          }else{
               int day = 0;
                    if (m % 2 == 0 && m != 2 && d >= m){
                         day += d-m;
                    }else{
                         if (m%2 == 1){
                              day += d;
                              m --;
                              d = mo[m-1];
                              day += d-m;
                         }else{
                              day += d;
                              m --;
                              d = mo[m-1];
                              m--;
                              d += mo[m-1];
                              day += d-m;
                         }

                    }
               // cout << day << endl;
               cout << days[day%7] << endl;
          }
     }


     return 0;
}
