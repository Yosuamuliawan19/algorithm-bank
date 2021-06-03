// #include<stdio.h>
// #include <bits/stdc++.h>
// created By Yosua Muliawan
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<deque>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
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
int tc, n, arr[100010], cpy[100010];
int main()
{
	scanf("%d",&tc);
     while (tc--){
          scanf("%d",&n);
          for (int i=0;i<n;i++){
               scanf("%d",&arr[i]);
          }
          bool found = 0;
          for (int lim=1000000;lim>=1;lim--){
               for (int i=0;i<n;i++) cpy[i] = arr[i];
               int mx = -1;
               for (int i=0;i<n;i++){
                    mx = max(mx, cpy[i]);
                    if (i == n-1) break;
                    if (cpy[i] != -1 && cpy[i+1] == -1){
                         int idx = i+1, val = cpy[i]+1;
                         while (cpy[idx] == -1){
                                   if (val > lim) val = 1;
                              cpy[idx++] = val++;
                         }
                    }
               }
               bool impos = 0;
               for (int i=0;i<n;i++){
                    if (cpy[i] == -1) continue;
                    if (i == n-1) break;
                    if (cpy[i]+1 != cpy[i+1]){
                         if (cpy[i+1] != 1){
                              impos = 1;
                              break;
                         }
                         if (cpy[i+1] == 1 && cpy[i] != mx){
                              impos = 1;
                              break;
                         }
                    }
               }
               if (!impos) {
                    bool inf = 1;
                    for (int i=0;i<n-1;i++){
                         if (arr[i] == -1) continue;
                         if (arr[i]+1 != arr[i+1]) inf = false;
                    }
                    if (mx == -1){
                         inf = 1;
                    }


                    if (inf){
                         printf("inf\n");
                    }else{
                         printf("%d\n",mx);
                    }
                    found = 1;
                    break;
               }
          }
          if (!found){
               printf("impossible\n");
          }
     }


	return 0;
}
