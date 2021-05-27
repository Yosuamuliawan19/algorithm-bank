// #include<stdio.h>
// #include <bits/stdc++.h>
#include<iostream>
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
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)
int tc,n,m,cnt,t=1;
int dx[8] = {1,1,1,0,0,-1,-1,-1};
int dy[8] = {1,-1,0,1,-1,1,-1,0};
const int sz = 110;
char arr[sz][sz];
string s;
void dfs (int x, int y, int idx, int dir){
     if (idx == s.length()){
          // cout << x << " " << y << endl;
          cnt ++; return;
     }
     int a = x+dx[dir], b = y+dy[dir];
     if (a>=0 && a<n && b>=0 && b < m && arr[a][b] == s[idx]) dfs(a,b,idx+1,dir);
}
int main()
{
	cin >> tc;
     while (tc--){
          cnt = 0;
          cin >> n >> m;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    cin >> arr[i][j];
               }
          }
          cin >> s;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    if (arr[i][j] == s[0]){
                         for (int k=0;k<8;k++){
                              dfs(i,j,1,k);
                         }
                    }
               }
          }
          cout << "Case "<< t++ << ": " << cnt << endl;
     }

	return 0;
}
