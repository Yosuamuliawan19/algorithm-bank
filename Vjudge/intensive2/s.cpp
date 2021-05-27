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
char arr[60][60];
int main()
{
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     queue<pair<int,int> > q;
     for (int i=n-1;i>=0;i--){
          for (int j=m-1;j>=0;j--){
               if (arr[i][j] == 'o') q.push(mp(i,j));
          }
     }
     while (!q.empty()){
          pair<int,int> cur = q.front();q.pop();
          int x = cur.fi , y = cur.se;
          int a = x + 1;
          if (a < n && arr[a][y] == '.'){
               arr[x][y] = '.';
               arr[a][y] = 'o';
               q.push(mp(a,y));
          }
     }
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cout << arr[i][j];
          }
          cout << endl;
     }


	return 0;
}
