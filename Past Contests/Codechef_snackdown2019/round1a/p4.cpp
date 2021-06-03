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
int gcd(int a, int b){
     if (a == b) return a;
     if (a == 0 || b == 0) return 0;
     if (a > b){
          return gcd(a-b,b);
     }else{
          return gcd(a,b-a);
     }
}
int main()
{

	cin >> tc;
     while (tc--){
          cin >> n;
          int gap = 1, mgap = -1, maxgap = 0, mingap = INT_MAX;
          for (int i=0;i<n;i++){
               scanf("%d",&arr[i]);
               if (arr[i] != -1){
                    if (gap != 1){
                         maxgap = max(maxgap, gap);
                         mingap = min(mingap, gap);
                         if (mgap == -1) mgap = gap;
                         else mgap = gcd(gap, mgap);
                    }
                    gap = 0;
               }
               gap ++;
          }
          cout << "mgap " << mgap << " maxgap " << maxgap << endl;
          for (int lim = maxgap; lim >= mingap ; lim -= mgap){
               cout << lim << " ";
          }cout << endl;
     }


	return 0;
}
