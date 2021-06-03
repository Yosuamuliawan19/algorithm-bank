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
int r, n, arr[10000], vis[10000], tmp;
int grid[60][60];
map<int,int> mapp;
vector<int> v;
int main(int argc, char const *argv[])
{
     scanf("%d%d",&r,&n);
     for (int i=0;i<10000;i++) arr[i] = -1;
     for (int i=0;i<n;i++){
          scanf("%d", &tmp);
          arr[tmp] = 6;
          v.pb(tmp);
     }
     int cur = r, tot = 0;
     for (int i=1;i<r;i++){
          for (int j=1;j<=cur;j++){
               tot ++;
               grid[i][j] = tot;
          }
          cur ++;
     }
     for (int i=r;i<r*2;i++){
          for (int j=1;j<=cur;j++){
               tot ++;
               grid[i][j] = tot;
          }
          cur --;
     }
     // grid[r*2][1] = INT_MAX;
     for (int i=0;i<r*2;i++){
          grid[r*2][i] = INT_MAX;
     }
     for (int i=0;i<10;i++){
          for (int j=0;j<10;j++){
               cout << grid[i][j] << " ";
          }cout << endl;
     }
     // for (int i=0;i<10000;i++){
     //      // grid[r*2-1][i] = 1000000;
     // }

     for (int i=0;i<n;i++){
          int cur = v[i];
          int row, col;
          vis[cur] = 1;
          cout << "cur " << cur << endl;
          for (int j=1;j<=r*2;j++){
               if (cur < grid[j][1]){
                    // cout << cur << " -=----" << grid[j][1] << endl;
                    row = j-1;
                    for (int k=0;k<10000;k++){
                         if (grid[j-1][k] == cur){
                              col = k;
                              break;
                         }
                    }
                    break;
               }
          }
          // cout << "row " << row << " col " <<col << " " << cur  << endl;

          int left = grid[row][1];
          int right = left + r + row-2;
          // cout << left <<  " -  "<< right << endl;
          vector<int> pro;
          if (cur != left){
               pro.pb(grid[row][col-1]);
          }
          if (cur != right){
               pro.pb(grid[row][col+1]);
          }
          if (row == r){
               pro.pb(grid[row+1][col]);
               pro.pb(grid[row+1][col-1]);
               pro.pb(grid[row-1][col]);
               pro.pb(grid[row-1][col-1]);
          }else if (row > r){
               // cout << "hey\n";
               // cout << row << " " << col << endl;
               pro.pb(grid[row+1][col]);
               pro.pb(grid[row+1][col-1]);
               pro.pb(grid[row-1][col]);
               pro.pb(grid[row-1][col+1]);
          }else{
               pro.pb(grid[row-1][col]);
               pro.pb(grid[row-1][col-1]);
               pro.pb(grid[row+1][col]);
               pro.pb(grid[row+1][col+1]);
          }
          for (int i=0;i<pro.size();i++){
               int now = pro[i];
               if (now != INT_MAX && !vis[now] && arr[now] != -1 && now != 0){
                    cout << now << endl;
                    arr[now]--;
                    arr[cur] --;
               }
          }

     }
     int ans = 0;
     for (int i=0;i<n;i++){
          cout << arr[v[i]] << " " << v[i] << endl;
          ans += arr[v[i]];
     }
     cout << ans<< endl;

	return 0;
}
