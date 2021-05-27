#include<iostream>
#include<vector>
#include<cmath>
#include<iomanip>
#include<map>
#include<algorithm>
#include<climits>

using namespace std;
int main (){
     int a,five = 5*60*60;
     int tc = 0;
     while (cin >> a){
          if (a == 0) break;
          vector<int> inp;
          tc++;
          inp.push_back(a);
          while (cin >> a){
               if (a == 0) break;
               inp.push_back(a);
          }
          int mx = INT_MAX;
          for (int i=0;i<inp.size();i++){
               if (inp[i] < mx) mx = inp[i];
          }
          int res = 0;
          bool fail = 0;
          for (int i=mx-5;i<=five;i++){
               bool f = 1;
               for (int j=0;j<inp.size();j++){
                    int x = i / inp[j];
                    int y = x*inp[j] + (inp[j]-5);
                    if (!(x % 2 == 0 && i < y)){
                         f = 0;
                    }
               }
               if (f){
                    res = i;
                    break;
               }
               if (i == five){
                    fail = 1;
               }
          }
          if (fail){
               cout << "Signals fail to synchronise in 5 hours\n";
               continue;
          }
          int h = res / (60*60), m = res / (60), s = res % 60;
          while (m >= 60) m-=60;
          if (h < 10) cout << 0;
          cout << h << ":";
          if (m < 10) cout << 0;
          cout << m << ":";
          if (s < 10) cout << 0;
          cout << s << "\n";
     }


}
