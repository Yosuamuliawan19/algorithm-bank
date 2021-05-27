#include<iostream>
#include<stdio.h>

#include<vector>
#include<stack>
#include<list>
typedef long long ll;
using namespace std;

int main (){
     list<int> st[300005];
     int tc, n, q;
     int op, a, b;
     scanf("%d", &tc);
     while (tc--){
          scanf("%d%d", &n, &q);
          for (int i=0;i<=n;i++) st[i].clear();
          while (q--){
               scanf("%d", &op);
               if (op == 1){
                    scanf("%d%d", &a, &b);
                    st[a].push_back(b);
               }else if (op == 2){
                    scanf("%d", &a);
                    if (st[a].size() == 0){
                         printf("EMPTY\n");
                    }else{
                         printf("%d\n" , st[a].back() );
                         st[a].pop_back();
                    }
               }else{
                    scanf("%d%d", &a, &b);
                    st[a].splice(st[a].end(), st[b]);
               }
          }

     }
}
