#include<iostream>
#include<vector>
#include<stack>

typedef long double ll;
using namespace std;
int main (){
     ll n, x, y;
     cin >> n;
     vector<pair<ll,ll> > points;
     for (ll i=0;i<n;i++){
          cin >> x >> y;
          points.push_back(make_pair(x,y));
     }
     if (n <= 4){
		cout << "YES\n";
		return 0;
	}
     int rot[3][3] = {{0,1,2},{0,2,1},{1,2,0}};
     bool flag = false;
     for (int i=0;i<3;i++){
          ll x1 = points[rot[i][0]].first,y1 = points[rot[i][0]].second;
          ll x2 = points[rot[i][1]].first,y2 = points[rot[i][1]].second;
          ll x3 = points[rot[i][2]].first,y3 = points[rot[i][2]].second;
          ll m1, c1, isX1 = false;
          if (x1 == x2){
               m1 = 0;
               c1 = x1;
               isX1 = true;
          }else if (y1 == y2){
               m1 = 0;
               c1 = y1;
          }else{
               m1 = (y1-y2)/(x1-x2);
               c1 = y1 - (m1 * x1);
          }
          ll cnt = 3;
          bool make = true;
          ll m2, c2, isX2 = false;
          for (int j=3;j<n;j++){
               x = points[j].first;
               y = points[j].second;
               // check against first equation
               if (isX1){
                    if (x == c1){
                         cnt ++;
                         continue;
                    }
               }else{
                    if (y == (m1 * x) + c1){
                         cnt ++;
                         continue;
                    }
               }
               // if not yet make second equation, make
               if (make){
                    make = false;
                    if (x == x3){
                         m2 = 0;
                         c2 = x;
                         isX2 = true;
                    }else if (y1 == y2){
                         m2 = 0;
                         c2 = y;
                    }else{
                         m2 = (y-y3)/(x-x3);
                         c2 = y - (m2 * x);
                    }
                    cnt ++;
               }else{
                    if (isX2){
                         if (x == c2){
                              cnt ++;
                              continue;
                         }
                    }else{
                         if (y == (m2 * x) + c2){
                              cnt ++;
                              continue;
                         }
                    }
               }
          }
          if (cnt == n){
               // cout << "correct on " << i + 1 << endl;
               flag = true;
          }
     }
     if (flag){
          cout << "YES\n";
     }else{
          cout << "NO\n";
     }
}
