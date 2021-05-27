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
int n, m;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char arr[60][60];
void ff(int i, int j){
     queue<pair<int,int> > q;
     arr[i][j] = '.';
     q.push(mp(i,j));
     while (!q.empty()){
          pair<int,int> cur = q.front();q.pop();
          int x = cur.fi, y = cur.se;
          for (int i=0;i<4;i++){
               int a = x+dx[i], b =y+dy[i];
               if (a>=0&&a<n&&b>=0&&b<m && (arr[a][b] == 'C' || arr[a][b] == 'L')){
                    arr[a][b] = '.';
                    q.push(mp(a,b));
               }
          }
     }
}
int main()
{
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++) cin >> arr[i][j];
     }
     int cnt = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == 'L'){
                    ff(i,j);
                    cnt ++;
               }
          }
     }
     cout << cnt << endl;


	return 0;
}
