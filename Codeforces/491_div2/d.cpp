#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main (){
     string a, b;
     cin >> a >> b;
     int len = a.length();

     string up[5] = {"0X","00","00","X0","00"};
     string down[5] = {"00","X0","0X","00","00"};

     int cnt = 0;
     for (int i=0;i<len-1;i++){
          string u = "  ";
          u[0] = a[i];
          u[1] = a[i+1];
          string d = "  ";
          d[0] = b[i];
          d[1] = b[i+1];
          for (int j=0;j<5;j++){
               if (u == up[j] && d == down[j]){
                    if (j == 4){
                         a[i] = 'X';
                         a[i+1] = '0';
                         b[i] = 'X';
                         b[i+1] = 'X';
                    }else{
                         a[i] = 'X';
                         a[i+1] = 'X';
                         b[i] = 'X';
                         b[i+1] = 'X';
                    }
                    cnt ++ ;
               }
          }
     }
     // cout << a << endl << b << endl;
     cout << cnt << endl;
}
