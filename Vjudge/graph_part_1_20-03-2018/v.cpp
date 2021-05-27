#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;
int main (){
     int tc;
     scanf("%d" , &tc);
     for (int t=1;t<=tc;tc++){
          int n , e;
          scanf("%d %d", &n, &e);
          vector<vector<int> > adjList = vector<vector<int> >(n,vector<int>());
          int a, b;
          for (int i=0;i<e;i++){
               scanf("%d %d", &a, &b);
               adjList[a-1].push_back(b-1);
               adjList[b-1].push_back(a-1);
          }
          vector<int> col = vector<int>(n,0);
          queue<int> q;
          q.push(0);
          bool flag = true;
          while (!q.empty()){

               int cur = q.front();q.pop();
               printf("cur = %d\n" , cur );
               for (int i=0;i<adjList[cur].size();i++){
                    int edge = adjList[cur][i];
                    printf("%d %d\n" , col[edge], col[cur]);
                    if (col[edge] == 0){
                         col[edge] = col[cur] + 1;
                         q.push(edge);
                    }else if ((col[edge] % 2) == (col[cur] % 2)){
                         printf("fault in %d %d\n" ,col[edge],col[cur]);
                         flag = false;
                         break;
                    }
               }
          }
          printf("Scenario #%d:" , t );
          if (flag){
               printf( "Suspicious bugs found!\n" );
          }else{
               printf( "No suspicious bugs found!\n");
          }
     }

     return 0;
}
