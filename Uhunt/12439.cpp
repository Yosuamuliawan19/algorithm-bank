#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
string mo[12] = {"January", "February", "March", "April", "May", "June", "July",
"August", "September", "October", "November" , "December"};
int n;
string s, tmp;
int m, d, y;
bool isLeap(int y){
     if (y % 400 == 0) return 1;
     if (y % 100 == 0) return 0;
     if (y % 4 == 0) return 1;
     return 0;
}
int main (){
     scanf("%d\n",&n);
     for (int t=1;t<=n;t++){
          string tmp,tmp2;
          int d1=0,m1=0,y1=0,d2=0,m2=0,y2=0;
          cin >> tmp >> tmp2 >> y1;
          for (int i=0;i<12;i++) if (tmp == mo[i]) m1 = i+1;
          for (int i=0;i<tmp2.length()-1;i++) d1 = d1*10 + (tmp2[i]-'0');
          cin >> tmp >> tmp2 >> y2;
          for (int i=0;i<12;i++) if (tmp == mo[i]) m2 = i+1;
          for (int i=0;i<tmp2.length()-1;i++) d2 = d2*10 + (tmp2[i]-'0');

          int ans = 0;
          if (m1 == 1 || m1 == 2) y1--;
          if (m2 == 1 || m2 == 2) y2--;
          if (m2 == 2 && d2 == 29) y2++;
          ans += (y2/4 -y2/100 +y2/400)  - (y1/4 -y1/100 +y1/400);
          printf("Case %d: %d\n", t,ans );
     }
     return 0;
}
