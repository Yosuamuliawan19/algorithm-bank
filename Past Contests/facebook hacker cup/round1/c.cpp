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
     int change[200000] = {0};
     int top, bot, topidx, botidx;
     scanf("%d",&tc);
     for (int t=1;t<=tc;t++){
          scanf("%d %d",&n,&m);
          scanf("%d %d %d %d %d %d",&arr[0],&arr[1],&w,&x,&y,&z );
          if (arr[0] > arr[1]){
               top = arr[0]; topidx = 0;
               bot = arr[1]; botidx = 1;
          }else{
               top = arr[1]; topidx = 1;
               bot = arr[0]; botidx = 0;
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
          for (int i=0;i<n;i++) change[i] = 0;
          // cout << "top - " << top << " bot - " << bot << endl;
          // for (int i=0;i<n;i++){
          //      cout << arr[i] << " ";
          // }
          // cout << endl << "change" << endl;
          for (int i=0;i<m;i++){
               scanf("%d %d %d %d",&a,&b,&u,&d);
               a--;b--;
               if (a < b){
                    for (int i=a;i<b;i++){
                         if (arr[i] > arr[i+1]){
                              change[i] = -d;
                         }else if (arr[i] < arr[i+1]){
                              change[i] = u;
                         }else{
                              change[i] = max(u,d);
                         }
                    }
               }else{
                    for (int i=a-1;i>=b;i--){
                         if (arr[i+1] > arr[i]){
                              change[i] = -d;
                         }else if (arr[i+1] < arr[i]){
                              change[i] = u;
                         }else{
                              change[i] = max(u,d);
                         }
                    }
               }
          }

          double nw[200000]; nw[0] = arr[0];
          for (int i=1;i<n;i++){
               nw[i] = nw[i-1] + change[i-1];
          }
          cout << "new : \n";
          for (int i=0;i<n;i++){
               cout << nw[i] << " " ;
          }
          cout << endl;
          double ans = abs(arr[topidx] - nw[topidx]) + abs(arr[botidx] - nw[botidx]);
          ans /= 2;
          cout << "ANSWER = " << ans << endl;

     }



     return 0;
}
