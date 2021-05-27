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
     int n, m, row[10], col[10];
     char arr[12][12];
     cin >> n >> m;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               cin >> arr[i][j];
          }
     }
     for (int i=0;i<n;i++){
          bool ore = 0;
          for (int j=0;j<m;j++){
               if (arr[i][j] == 'S') ore = 1;
          }
          row[i] = ore;
     }
     for (int j=0;j<m;j++){
          bool ore = 0;
          for (int i=0;i<n;i++){
               if (arr[i][j] == 'S') ore = 1;
          }
          col[j] = ore;
     }
     // for (int i=0;i<n;i++){
     //      cout << row[i] << " " ;
     // }cout << endl;
     // for (int j=0;j<m;j++){
     //      cout << col[j] << " " ;
     // }cout << endl;

     int cnt = 0;
     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (row[i] == 0 || col[j] == 0) cnt ++;
          }
     }
     cout << cnt << endl;



	return 0;
}
