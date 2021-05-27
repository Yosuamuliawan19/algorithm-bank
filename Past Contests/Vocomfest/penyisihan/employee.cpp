#include<iostream>
// #include<stdio.h>

#include<vector>
#include<map>
#include<queue>
#include<algorithm>
#include<iomanip>


using namespace std;
int main (){
     int n , m ;
     scanf("%d %d" , &n , &m );
     if (m < n) {
          printf("No\n");
          return 0;
     }
     vector<int> office(n,0);
     for (int i=0;i<m;i++){
          int x; scanf("%d" , &x);
          for (int j=0;j<x;j++){
               int cur; scanf("%d", &cur );
               office[cur-1]++;
          }
     }
     bool flag = true;
     for (int i=0;i<n;i++){
          // printf("office %d emplo %d\n" , i+1, office[i]);
          if (office[i] == 0 ){
               flag = false;
               break;
          }
     }
     if (flag){
          printf("Yes\n");
     }else{
          printf("No\n");

     }


}
