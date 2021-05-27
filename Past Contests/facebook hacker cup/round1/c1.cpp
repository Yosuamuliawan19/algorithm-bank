#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<cmath>

typedef long long ll;
using namespace std;
int main (){
     int tc,n,m;
     int w,x,y,z;
     int a,b,u,d;
     int arr[200000] = {0};
     int cu[200000] = {0};
     int cd[200000] = {0};
     int top, bot, topidx, botidx;
     scanf("%d",&tc);
     for (int t=1;t<=tc;t++){
          scanf("%d %d",&n,&m);
          scanf("%d %d %d %d %d %d",&arr[0],&arr[1],&w,&x,&y,&z );
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
               scanf("%d %d %d %d",&a,&b,&u,&d);
               a--;b--;
               if (a > b){
                    for (int i=a;i<b;i++){
                         cu[i] = min(cu[i], u);
                         cd[i] = min(cd[i], d);
                    }
               }else{
                    for (int i=b-1;i>=a;i--){
                         cu[i] = min(cu[i], u);
                         cd[i] = min(cd[i], d);
                    }
               }
          }
          cout << "\nchange up\n";
          for (int i=0;i<n;i++){
               cout << cu[i] << " ";
               if (cu[i] == INT_MAX){
                    cu[i] = 0;
               }
               if (cd[i] == INT_MAX){
                    cd[i] = 0;
               }
          }
          cout << "\nchange down\n";
          for (int i=0;i<n;i++){
               cout << cd[i] << " ";
          }
          cout << endl;
          for (int i=0;i<n;i++){
               cout << arr[i] << " ";
          }
          int mc = INT_MIN;
          for (int i=0;i<n-1;i++){
               if (i == n-2){
                    mc = max(mc, min(abs( (arr[i]-cd[i]) - arr[i+1] ), abs( (arr[i]+cu[i]) - arr[i+1] )));
               }
               if (arr[i] > arr[i+2]){
                    mc = max(mc, abs( (arr[i]-cd[i]) - arr[i+1] ) );
                    arr[i+1] = arr[i]-cd[i];
               }else if (arr[i] < arr[i+1]){
                    mc = max(mc, abs( (arr[i]+cu[i]) - arr[i+1] ) );
                    arr[i+1] = arr[i]+cu[i];
               }
          }
          cout << endl;
          for (int i=0;i<n;i++){
               cout << arr[i] << " ";
          }
          cout << endl << mc << endl;
     }



     return 0;
}
