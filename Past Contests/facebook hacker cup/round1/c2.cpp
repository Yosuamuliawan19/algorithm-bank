#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<iomanip>
#include<cmath>

typedef long long ll;
using namespace std;
int main (){
     ll tc,n,m;
     ll w,x,y,z;
     ll a,b,u,d;
     ll arr[200000] = {0};
     ll cu[200000] = {0};
     ll cd[200000] = {0};
     ll top, bot, topidx, botidx;
     scanf("%lld",&tc);
     for (int t=1;t<=tc;t++){
          scanf("%lld %lld",&n,&m);
          scanf("%lld %lld %lld %lld %lld %lld",&arr[0],&arr[1],&w,&x,&y,&z );
          if (arr[0] > arr[1]){
               top = arr[0]; topidx = 0; bot = arr[1]; botidx = 1;
          }else{
               top = arr[1]; topidx = 1; bot = arr[0]; botidx = 0;
          }
          for (int i=2;i<n;i++){
               arr[i] = (w*arr[i-2] + x*arr[i-1] + y )%z;
               if (arr[i] > top){
                    top = arr[i]; topidx = i;
               }
               if (arr[i] < bot){
                    bot = arr[i]; botidx = i;
               }
          }
          for (int i=0;i<n;i++) {
               cu[i] = INT_MAX; cd[i] = INT_MAX;
          }
          for (int i=0;i<m;i++){
               scanf("%lld %lld %lld %lld",&a,&b,&u,&d);
               a--;b--;
               if (a < b){
                    for (int i=a;i<b;i++){
                         cu[i] = min(cu[i], u);
                         cd[i] = min(cd[i], d);
                    }
               }else{
                    for (int i=a-1;i>=b;i--){
                         cu[i] = min(cu[i], d);
                         cd[i] = min(cd[i], u);
                    }
               }
          }
          // cout << "\nchange up\n";
          for (int i=0;i<n;i++){
               // cout << cu[i] << " ";
               if (cu[i] == INT_MAX){
                    cu[i] = 0;
               }
               if (cd[i] == INT_MAX){
                    cd[i] = 0;
               }
          }
          // cout << "\nchange down\n";
          // for (int i=0;i<n;i++){
          //      cout << cd[i] << " ";
          // }
          // int mc = INT_MIN;
          // for (int i=0;i<n-1;i++){
          //      if (arr[i] > arr[i+1]){
          //           mc = max(mc, abs( (arr[i]-cd[i]) - arr[i+1] ) );
          //           arr[i+1] = arr[i]-cd[i];
          //      }else if (arr[i] < arr[i+1]){
          //           mc = max(mc, abs( (arr[i]+cu[i]) - arr[i+1] ) );
          //           arr[i+1] = arr[i]+cu[i];
          //      }
          // }
          ll mc = 0,lmc = LLONG_MIN;
          // cout << topidx << " " << botidx << endl;
          // cout << top << " " << bot << endl;
          if (topidx < botidx){
               for (int i=topidx+1;i<=botidx;i++){
                    if (cd[i-1] == 0) continue;
                    ll old = arr[i];
                    arr[i] = arr[i-1] - cd[i-1];
                    if (arr[i] < bot){
                         arr[i] = arr[i-1];
                    }
               }
               for (int i=1;i<=topidx;i++){
                    if (cd[i-1] == 0) continue;
                    ll old = arr[i];
                    arr[i] = arr[i-1] + cu[i-1];
                    if (arr[i] > top){
                         arr[i] = arr[i-1];
                    }
                    old = abs(old-arr[i]);
                    if (old > lmc){
                         lmc = old;
                    }
               }
               for (int i=botidx+1;i<=n;i++){
                    if (cd[i-1] == 0) continue;
                    ll old = arr[i];
                    arr[i] = arr[i-1] + cu[i-1];
                    if (arr[i] > top){
                         arr[i] = arr[i-1];
                    }
                    old = abs(old-arr[i]);
                    if (old > lmc){
                         lmc = old;
                    }
               }
               // cout << "lmc = "<< lmc /2<< endl;
               mc = arr[botidx]-bot;
          }else{
               for (int i=botidx+1;i<=topidx;i++){
                    if (cd[i-1] == 0) continue;
                    ll old = arr[i];
                    arr[i] = arr[i-1] + cu[i-1];
                    if (arr[i] > top){
                         arr[i] = arr[i-1];
                    }
               }
               for (int i=1;i<=botidx;i++){
                    if (cd[i-1] == 0) continue;
                    ll old = arr[i];
                    arr[i] = arr[i-1] - cd[i-1];
                    if (arr[i] < bot){
                         arr[i] = arr[i-1];
                    }
                    old = abs(old-arr[i]);
                    if (old > lmc){
                         lmc = old;
                    }
               }
               for (int i=topidx+1;i<=n;i++){
                    if (cd[i-1] == 0) continue;
                    ll old = arr[i];
                    arr[i] = arr[i-1] - cd[i-1];
                    if (arr[i] < bot){
                         arr[i] = arr[i-1];
                    }
                    old = abs(old-arr[i]);
                    if (old > lmc){
                         lmc = old;
                    }
               }
               mc = top -arr[topidx];
          }


          // cout << endl;
          // for (int i=0;i<n;i++){
          //      cout << arr[i] << " ";
          // }cout << endl;
          if (lmc > mc) mc = lmc;
          cout << "Case #" << t << ": "<<setprecision(6) << fixed << (double) mc / 2<< endl;
     }



     return 0;
}
