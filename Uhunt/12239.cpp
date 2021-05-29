#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<map>

using namespace std;
int main (){
     int n, b;
     while (cin >> n >> b){
          if (!n && !b) break;
          vector<int> arr(b);
          map<int, bool> m;
          for (int i=0;i<b;i++){
               cin >> arr[i];
               for (int j=0;j<=i;j++){
                    int tmp = abs(arr[i]-arr[j]);
                    m[tmp] = 1;
               }
          }
          bool flag = true;
          for (int i=0;i<=n;i++){
               if (!m[i]) {
                    flag = false;
                    break;
               }
          }
          if (flag){
               printf("Y\n");
          }else{
               printf("N\n");
          }
     }


     return 0;
}
