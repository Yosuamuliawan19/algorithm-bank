#include<iostream>

typedef long long ll;
using namespace std;
int main (){
     string s;
     cin >> s;
     int tmp = 0;
     int ans = 0;
     for (int i=0;i<s.length();i++){
          tmp = (tmp*10) + (s[i]-'0');
          // cout <<"tmp = " <<  tmp << endl;
          if (tmp % 3 == 0){
               // cout << "found = " << tmp << endl;
               ans ++;
               tmp = 0;
          }else{
               int tmp2 = tmp;
               int cur = 0;
               bool flag = false;
               while (tmp2 != 0){
                    cur = (cur*10 )+ (tmp2%10);
                    if (cur % 3 == 0){
                         flag = true;
                         // cout << "found = " << cur << endl;
                         ans ++;
                         break;
                    }
                    tmp2 /= 10;
               }
               if (flag) tmp = 0;
          }
     }
     cout <<  ans << endl;


     return 0;
}
