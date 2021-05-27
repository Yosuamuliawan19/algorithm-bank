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
     int n,m,vis[2000]={0},a,b;
     cin >> n >> m;
     for (int i=0;i<m;i++){
          cin >> a >> b;
          vis[a] = 1;
          vis[b] = 1;
     }
     for (int i=1;i<=n;i++){
          if (vis[i] == 0){
               cout << n-1 << endl;
               for (int j=1;j<=n;j++){
                    if (i == j) continue;
                    cout << i << " " << j << endl;
               }
               break;
          }
     }
	return 0;
}
