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
int tc, n, arr[100010];
int main()
{
	scanf("%d",&tc);
     while (tc--){
          scanf("%d",&n);
          for (int i=0;i<n;i++) {
               scanf("%d",&arr[i]);
          }


          for (int i=0;i<n;i++){
               if (arr[i] != -1 && arr[i+1] == -1){
                    int elem = arr[i]+1;
                    for (int j=i+1;j<n;j++){
                         if (arr[j] != -1) break;
                         arr[j] = elem++;
                    }
               }
          }
          for (int i=0;i<n;i++){
               cout << arr[i] << " ";
          }cout << endl;
          int mx = 0;
          bool impos = 0;
          for (int i=0;i<n-1;i++){
               if (arr[i] != -1){
                    if (arr[i]+1 != arr[i+1] && arr[i+1] != 1){
                         impos = 1;
                         break;
                    }
                    mx = max(arr[i], mx);
               }
          }

          if (impos){
               printf("impossible\n");
          }else{
               int maxx = 0; bool inf = 1;
               for (int i=0;i<n;i++){
                    if (arr[i] == -1) continue;
                    if (arr[i] <= maxx){
                         inf = 0;
                         break;
                    }
                    maxx = max(maxx, arr[i]);
               }
               if (inf){
                    printf("inf\n");
               }else printf("%d\n",mx);
          }

     }


	return 0;
}
