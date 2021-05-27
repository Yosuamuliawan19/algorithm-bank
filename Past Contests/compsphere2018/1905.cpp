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
int arr[6][6];
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
bool suc = false;
void dfs(int x, int y){
     if (x == 4 && y == 4){
          suc = 1;
          return ;
     }
     arr[x][y] = 1;
     for (int i=0;i<4;i++){
          int a = x+dx[i],b=y+dy[i];
          if (a>=0&&a<5&&b>=0&&b<5&&arr[a][b] == 0){
               dfs(a,b);
          }
     }
}
int main()
{
     int tc;
     cin >> tc;
     while (tc--){
          suc = false;
          for (int i=0;i<5;i++){
               for (int j=0;j<5;j++){
                    cin >> arr[i][j];
               }
          }
          dfs(0,0);
          if (suc ) cout << "COPS\n";
          else cout << "ROBBERS\n";
     }

	return 0;
}
