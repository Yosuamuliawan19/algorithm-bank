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

int n , m;
char arr[110][110];
int dirx[8] = {1,1,1,0,0,-1,-1,-1};
int diry[8] = {1,0,-1,1,-1,1,0,-1};
void dfs(int x, int y){
     for (int i=0;i<8;i++){
          int a = x + dirx[i], b = y + diry[i];
          if (arr[a][b] == '#'){
               arr[a][b] = '0';
               dfs(a,b);
          }
     }
}
int main(int argc, char const *argv[])
{

     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     int cnt = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == '#'){
                    arr[i][j] = '0';
                    dfs(i,j);
                    cnt ++;
               }
          }
     }

     cout << cnt << endl;

	return 0;
}
