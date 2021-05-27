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
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef vector<ll> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
ll tc, n, arr[100010];
int main()
{
	scanf("%lld",&tc);
     while (tc--){
          bool inf = 1;
          bool impos = 0;
          scanf("%lld",&n);
          int rep = INT_MAX;
          for (ll i=0;i<n;i++){
               scanf("%lld",&arr[i]);
               if (i != 0 && arr[i] == 1 && arr[i-1] != -1){
                    if (rep == -1) rep = arr[i-1];
                    else if (rep != arr[i-1]){
                         impos = 1;
                    }
               }
          }
          printf("rep = %d\n",rep);
          if (impos){
               printf("impossible\n");
               continue;
          }
          ll mx = -1;
          for (ll i=0;i<n-1;i++){
               mx = max(arr[i+1], max(arr[i], mx));
               if (arr[i] != -1 && arr[i+1] == -1){
                    ll elem = arr[i] + 1;
                    for (ll j=i+1;j<n;j++){
                         if (arr[j] != -1){
                              i = j-1;
                              break;
                         }
                         arr[j] = elem ++;
                         if (elem > rep) elem = 1;
                         mx = max(mx, arr[j]);
                    }
               }
          }
          cout << "mx = " << mx << endl;
          for (ll i=0;i<n;i++){
               cout << arr[i] << " ";
          }cout << endl;

          for (ll i=0;i<n-1;i++){
               if (arr[i] == -1) continue;
               if (arr[i]+1 != arr[i+1]){
                    inf = 0;
                    if (arr[i+1] != 1 || arr[i] != mx){
                         impos = 1;
                    }
               }
          }
          if (impos){
               printf("impossible\n");
          }else if (inf){
               printf("inf\n");
          }else{
               printf("%lld\n",mx);
          }
     }

	return 0;
}
