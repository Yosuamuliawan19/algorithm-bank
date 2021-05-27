#include<iostream>
#include<cmath>
#include<iomanip>

typedef long long ll;
typedef long double ld;

using namespace std;
struct point{
     ld x;
     ld y;
};
ld dist(point a, point b){
     ld x = a.x - b.x;
     ld y = a.y - b.y;
     return sqrt(x*x + y*y);
}
ld cross(point a, point b, point c){
     return ( (b.y-a.y) * (c.x-b.x) - (b.x-a.x) * (c.y-b.y) );
}
int main (){
     int tc, n;
     cin >> tc;
     while (tc--){
          cin >> n;
          point v[1001];
          point temp;
          for (int i=0;i<n;i++){
               cin >> v[i].x >> v[i].y;

          }
          ld ans = -1;
          if (n == 4){
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         if (j != i){
                              int pos = 0, neg =0;
                              for (int k=0;k<n;k++){
                                   if (k != j && k != i){
                                        if (cross(v[i],v[j],v[k]) > 0){
                                             pos++;
                                        }else{
                                             neg++;
                                        }
                                   }
                              }
                              if (pos >= 2 || neg >= 2){
                                   ans = max(ans, dist(v[i],v[j]));
                              }
                         }
                    }
               }
          }else{
               for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                         ans = max(ans, dist(v[i],v[j]));
                    }
               }
          }

          cout << fixed << setprecision(10) << ans << endl;
     }
     return 0;
}
