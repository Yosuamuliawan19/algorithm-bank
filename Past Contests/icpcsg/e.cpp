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
int n, arr[40][40];
ll lim = 0;
map<ll,ll> memo;
string dtob(ll num)
{
    string binaryNumber = "";
    int remainder, i = 1, step = 1;
    while (num!=0)
    {
        remainder = num%2;
        num /= 2;
        binaryNumber =  (char)(remainder + '0') + binaryNumber;
        i *= 10;
    }
    while (binaryNumber.length() != n*2 ){
         binaryNumber = '0' + binaryNumber;
    }
    reverse(binaryNumber.begin(), binaryNumber.end());
    return binaryNumber;
}

int iter = 0;
int dp(int mn, ll mask){
     if (mask == lim){
          return mn;
     }
     if (memo[mask] != 0){
          if (memo[mask] >= mn) return 0;
     }
     iter ++;
     // cout << mn << " "<< mask << endl;
     int ret = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               if ((mask&(1<<i)) == 0 && (mask&(1<<(j+n))) == 0){
                    ret = max(ret, dp (min(mn, arr[i][j]), mask|(1<<i)|(1<<(j+n))));
               }
          }
     }
     return memo[mask] = ret;
}
int main(int argc, char const *argv[])
{
     scanf("%d",&n);
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               scanf("%d",&arr[i][j]);
          }
     }
     lim = (1<<(n*2))-1;
     int ans = 0;
     for (int i=0;i<n;i++){
          int now = dp(arr[i][0], (1<<i) | (1<<n));
          cout << dtob((1<<i) | (1<<n)) << endl;
          cout << arr[i][0] << " "<<  now << " -------\n";
          cout << iter << endl;
          ans = max(ans, now );

     }
     cout << ans << endl;
     cout << iter << endl;
     // cout << dtob(lim) << endl;


	return 0;
}
