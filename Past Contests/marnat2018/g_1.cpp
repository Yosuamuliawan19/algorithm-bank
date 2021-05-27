#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
const int sz = 100100;
ll tc, n,  arr[sz], tab[sz];

int main(int argc, char const *argv[])
{

     ll t = 1;
	scanf("%lld", &tc);b
     while (tc--){
          scanf("%lld" , &n);
          for (int i=0;i<n;i++){
               scanf("%lld", &arr[i]);
          }
          for (int i=0;i<n;i++){
               tab[i] = 0;
          }
          for (int i=n-1;i>=0;i--){
               ll mx = 0;
               for (int j=i+2;j<=i+5;j++){
                    if (j >= n) break;
                    mx = max(mx, tab[j]);
               }
               tab[i] = arr[i] + mx;
          }
          ll ans = 0;
          for (int i=1;i<n;i++){
               if (i >= 5) break;
               ans = max(ans, tab[i]);
          }
          // for (int i=0;i<n;i++){
          //      cout << tab[i] << " ";
          // }
          // cout << endl;
          printf("Case %lld:%lld\n", t++, ans);
     }
	return 0;
}
