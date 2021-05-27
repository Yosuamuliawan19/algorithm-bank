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
int n,m;
char arr[500][500];
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
int cnt = 0;
void dfs(int x, int y){
     arr[x][y] = '-';
     cnt ++;
     for (int i=0;i<4;i++){
          int a = x+dx[i], b = y+dy[i];
          if (a>=0&&a<n&&b>=0&&b<m&& arr[a][b] == 'C'){
               dfs(a,b);
          }
     }
}
int main()
{

     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     int mx = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == 'C'){

                    dfs(i,j);
                    mx = max(cnt, mx);
                    // cout << cnt << endl;
                    cnt = 0;
               }
          }
     }
     cout << mx << endl;
	return 0;
}
