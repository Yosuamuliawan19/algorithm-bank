#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main (){
     string s;
     while (cin >> s){
          if (s == "0:00") break;
          double h,m; string tmp ="";
          for (int i=0;i<s.length();i++){
               if (s[i] == ':'){
                    if (tmp.length() == 2){
                         h = ((tmp[0]-48)*10) + (tmp[1]-48);
                    }else{
                         h = (tmp[0]-48);
                    }
                    tmp = "";
               }else{
                    tmp += s[i];
               }
          }
          if (tmp.length() == 2){
               m = ((tmp[0]-48)*10) + (tmp[1]-48);
          }else{
               m = (tmp[0]-48);
          }
          double hdeg = (((int)h%12)*(double)360/12) + (m*30/60);
          double mdeg = m*360/60;
          // cout << hdeg << " " << mdeg << endl;
          double ans = abs(hdeg-mdeg);
          if (360 - ans < ans) ans = 360 - ans;
          cout << setprecision(3) << fixed << ans << endl;
     }
}
