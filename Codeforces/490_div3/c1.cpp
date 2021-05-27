#include<iostream>
#include<stdio.h>
#include<vector>
typedef long long ll;
using namespace std;
int stacks[1000001][1000001];
int sz = 1000000;
int main (){
     int tc, n, q;
     int op, a, b;
     scanf("%d", &tc);
     while (tc--){
          scanf("%d %d", &n, &q);
          for (int i=n; i>=0; i--){
               stacks[i][sz] = 0;
          }
          while (q--){
               scanf("%d", &op);
               if (op == 1){
                    scanf("%d %d", &a, &b);
                    stacks[a][(stacks[a][sz])] = b;
                    stacks[a][sz] ++;
               }else if (op == 2){
                    scanf("%d", &a);
                    if (stacks[a][sz] == 0){
                         printf("EMPTY\n");
                    }else{
                         printf("%d\n", stacks[a][(stacks[a][sz])-1] );
                         stacks[a][sz]--;
                    }
               }else{
                    scanf("%d %d", &a, &b);
                    for (int i=0;i<stacks[b][sz];i++){
                         stacks[a][(stacks[a][sz]+i)] = stacks[b][i];
                    }
                    stacks[a][sz] +=stacks[b][sz];
                    stacks[b][sz] = 0;
               }
          }
     }
}
