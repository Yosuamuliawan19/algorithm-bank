#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<algorithm>
#include<math.h>
#include<iomanip>
typedef long long ll;
typedef long double ld;
using namespace std;

ll  n, k, c;
int main (){
     ll prev, temp, cnt = 0, nobytes = 0;
     string res = "";
     int first = 0;
     while (cin >> temp){
          if (temp != prev){
               if (first > 1) res += " ";
               first ++;
               while (cnt >= 256){
                    res += "256 ";
                    res += to_string(prev);
                    cnt -= 256;
                    nobytes += 2;
               }   
               if (cnt != 0){
                    res +=  to_string(cnt)+ " "+ to_string(prev);
                    nobytes += 2;
               }
               prev = temp;
               cnt = 0;
          }
          cnt ++;
     }
     if (first > 1) res += " ";
     while (cnt >= 256){
          res += "256 ";
          res += to_string(prev);
          cnt -= 256;
          nobytes += 2;
     }
     if (cnt != 0){
          res += to_string(cnt)+ " "+ to_string(prev);
          nobytes += 2;
     }

     cout << nobytes << "\n";
     cout << res << endl;
     return 0;
}
