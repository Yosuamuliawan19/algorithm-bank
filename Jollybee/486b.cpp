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
     int n, m, arr[110][110];
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     int row[110], col[110];
     for (int i=0;i<110;i++){
          row[i] = -1;
          col[i] = -1;
     }
     bool suc = 1;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == 0){
                    row[i] = 0;
                    col[i] = 0;
               }
          }
     }
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (arr[i][j] == 1){
                    if (row[i] == 0 && col[i] == 0){
                         suc = false;
                    }
               }
          }
     }
     for (int i=0;i<n;i++){
          cout << row[i] << " ";
     }cout << endl;
     for (int i=0;i<m;i++){
          cout << col[i] << " ";
     }cout << endl;


	return 0;
}
