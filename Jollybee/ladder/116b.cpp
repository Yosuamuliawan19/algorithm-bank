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
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
int main()
{
     int n, m;
     char arr[20][20];
     int cnt = 0;
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == 'P'){
                    for (int k=0;k<4;k++){
                         int a = i+dx[k], b = j+dy[k];
                         if (a>=0&&a<n&&b>=0&&b<m&&arr[a][b]=='W'){
                              arr[a][b] = '.';
                              cnt ++;
                              break;
                         }
                    }
               }
          }
     }
     cout << cnt << endl;

	return 0;
}
