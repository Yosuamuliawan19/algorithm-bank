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

int main()
{
     int tc,a,b;
     cin >> tc;
     while (tc--){
          cin >> a >> b;
          int n=1,mx=1;
          for (int i=a;i<=b;i++){
               int cnt = 0;
               for (int j=1;j*j<=i;j++){
                    if (i%j == 0) cnt++;
               }
               if (sqrt(i) != (int)sqrt(i)){
                    cnt *= 2;
               }else{
                    cnt = cnt*2 - 1;
               }
               if (cnt > mx){
                    n = i;
                    mx = cnt;
               }
          }
          printf("Between %d and %d, %d has a maximum of %d divisors.\n"
          ,a,b,n,mx);
     }

	return 0;
}
