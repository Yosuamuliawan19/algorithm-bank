#include<iostream>
using namespace std;
typedef long long ll;
bool isLeap(ll y){
     if (y % 400 == 0) return 1;
     if (y % 100 == 0) return 0;
     if (y % 4 == 0) return 1;
     else return 0;
}
int main (){
     ll mo[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     ll zo[12][4] =  {{1,21,2,19} , {2,20,3,20}, {3,21,4,20},
                    {4,21,5,21} , {5,22,6,21}, {6,22,7,22},
                    {7,23,8,21} , {8,22,9,23}, {9,24,10,23},
                    {10,24,11,22} , {11,23,12,22}, {12,23,1,20}};
     string name[12] = {"aquarius", "pisces", "aries", "taurus", "gemini","cancer",
                         "leo","virgo","libra","scorpio","sagittarius", "capricorn"};
     ll tc;
     string s;

     cin >> tc;
     for (int t=1;t<=tc;t++){
          cin >> s;
          ll d =0,m=0,y=0;
          ll ges = 40*7;
          m = (s[0]-'0')*10 + (s[1]-'0');
          d = (s[2]-'0')*10 + (s[3]-'0');
          y = (s[4]-'0')*1000 + (s[5]-'0')*100 + (s[6]-'0')*10 + (s[7]-'0');
          // cout << d << " " << m << " " << y << endl;
          // d += ges;
          // if (isLeap(y)) mo[1] = 29;
          // while (d > mo[m-1]){
          //      if (d > 365){
          //           if (isLeap(y)) d -= 366;
          //           else d-= 365;
          //           y++; continue;
          //      }
          //      d -= mo[m-1];
          //      m++;
          //      if (m == 13){
          //           m = 1;
          //           y++;
          //           if (isLeap(y)) mo[1] = 29;
          //           else mo[1] = 28;
          //      }
          // }
          while (ges--){
               d++;
               if (isLeap(y)) mo[1] = 29;
               else mo[1] = 28;

               if (d > mo[m-1]){
                    d = 1;
                    m++;
                    if (m > 12){
                         m = 1;
                         y++;
                    }
               }
          }

          string zods = name[11];
          for (int i=0;i<11;i++){
               if (m >= zo[i][0] && m <= zo[i][2]){
                    if (m == zo[i][0] && d >= zo[i][1]){
                         zods = name[i];
                         break;
                    }else if(m == zo[i][2]&& d <= zo[i][3]){
                         zods = name[i];
                         break;
                    }
               }
          }
          cout << t << " ";
          if (m < 10) cout << 0;
          cout << m << "/";
          if (d < 10) cout << 0;
          cout << d << "/";
          cout << y << " "<< zods << endl;

     }
}
