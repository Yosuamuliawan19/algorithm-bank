#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<climits>
#include<set>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

const double pi = acos(-1);
int tc,n,r;
double dis,deg;

int main(int argc, char const *argv[])
{

	scanf("%d", &tc);
     while (tc--){
          scanf("%d%d", &n,&r);
          int x = 0, y = 0;
          for (int i=0;i<n;i++){
               scanf("%lf%lf", &deg,&dis);
               double mx = 0, my = 0;
               if (deg == 0 || deg == 360){
                    mx = dis;
               }else if (deg == 90){
                    my = dis;
               }else if (deg == 180){
                    mx = -dis;
               }else if (deg == 240){
                    my = -dis;
               }else if (deg > 240){
                    mx = sin((deg-240)*pi/180)*dis;
                    my = - 1 *cos((deg-240)*pi/180)*dis;
               }else if (deg > 180){
                    cout << "hey\n";
                    mx =  -1 *cos((deg-180)*pi/180) * dis;
                    my =  -1 *sin((deg-180)*pi/180) * dis;
               }else if (deg > 90){
                    mx = -1 * cos((180-deg)*pi/180) * dis;
                    my = sin((180-deg)*pi/180) * dis;
               }else {
                    mx = dis * sin(deg);
                    my = dis * sin(deg);
               }
               x+= mx; y+= my;
               double difx, dify;
               while (x > r || y > r){
                    difx = x-r;
                    dify = y-r;
                    if (x > r){
                         x = r - difx;
                    }else if (y > r){
                         y = r - dify;
                    }
               }

               cout << mx << " " <<my << endl;
          }
          cout << x << " " << y << endl;
     }

	return 0;
}
