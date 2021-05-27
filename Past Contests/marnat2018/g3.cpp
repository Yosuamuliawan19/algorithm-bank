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
ll tc,n,arr[sz],tab[sz];
ll t = 1;

int main(int argc, char const *argv[])
{

     cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<sz;i++){
               tab[i] = 0;
          }
          for (int i=0;i<n;i++){
               cin >> arr[i];
          }
          for (int i=n-1;i>=0;i--){
               ll mx = 0;
               for (int j=i+2;j<n;j++){
                    if (j > i+5) break;
                    mx = max(mx, tab[j]); }
               tab[i] = arr[i] + mx;
          }
          ll ans = tab[1];
          for (int i=1;i<5;i++){
               if (i >= n) break;
               ans = max(ans, tab[i]);
          }
          cout << "Case " << t++ << " :" << ans << endl;
     }
	return 0;
}
