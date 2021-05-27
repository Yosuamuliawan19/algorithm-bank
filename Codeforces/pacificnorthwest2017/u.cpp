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


double arr[6];
double sum = 0;
double abso(double x){
     if (x < 0) return -1*x;
     return x;
}
int main(int argc, char const *argv[])
{

     for (int i=1;i<=6;i++){
          cin >> arr[i-1];
          arr[i-1]*= i;
          sum += arr[i-1];
     }
     cout << "sum " << sum << endl;
     double ans = INT_MAX;
     for (int i=1;i<=6;i++){
          double cur = sum - arr[i-1];
          cout << cur << " - " << arr[i-1] << endl;
          int iter = 0;
          double l = INT_MIN, r = INT_MAX, m = 0;
          while (r > l){
               iter ++; if (iter == 100) break;
               m = r+(l-r)/2;
               if (    + cur > 3.5 ){
                    r = m;
               }else{
                    l = m;
               }
          }
          cout << i << " " << m << endl;
          ans = min(ans, abso(m - i));
     }





     cout << fixed << setprecision(4) << ans << endl;


	return 0;
}
