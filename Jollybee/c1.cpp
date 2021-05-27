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
int tc;
int main()
{
     scanf("%d",&tc);
     while (tc--){
          scanf("%d%d\n",&n,&m);
          for (int i=0;i<=n+m;i++) arr[i] = 0;
          int idx = 0;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    scanf("%c",&c);
                    if (c == '1') {
                         v[idx++] = mp(mp(i,j),;
                    }
               }
               scanf("\n");
          }

	return 0;
}
