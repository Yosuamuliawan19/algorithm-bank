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
#include<set>
#include<queue>
#include<string>

// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

string arr[1000];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main(int argc, char const *argv[])
{
	ll n, m, s;
     ll sx, sy;
     string ins;
     ll dir = 0;
     while (cin>>n>>m>>s){
          if (!n&&!m&&!s) break;
          for (int i=0;i<n;i++){
               cin >> arr[i];
               for (int j=0;j<m;j++){
                    if (arr[i][j] == 'N' || arr[i][j] == 'S'||
                    arr[i][j] == 'L' || arr[i][j] == 'O'){
                         sx = i;
                         sy = j;
                         if (arr[i][j] == 'N'){
                              dir = 0;
                         }else if (arr[i][j] == 'L'){
                              dir = 1;
                         }else if (arr[i][j] == 'S'){
                              dir = 2;
                         }else{
                              dir = 3;
                         }
                    }
               }
          }
          cin >> ins;
          ll ans = 0;
          for (int i=0;i<s;i++){
               if (ins[i] == 'E'){
                    dir --; if (dir == -1) dir = 3;
               }else if (ins[i] == 'D'){
                    dir ++; if (dir == 4) dir = 0;
               }else{
                    int a = sx+dx[dir], b = sy+dy[dir];
                    if (arr[a][b] != '#' && (a>=0 && a<n && b>=0 && b<m)){
                         sx = a; sy = b;
                         if (arr[a][b] == '*'){
                              ans ++;
                              arr[a][b] = '.';
                         }
                    }

               }
          }
          cout << ans << endl;

     }

	return 0;
}
