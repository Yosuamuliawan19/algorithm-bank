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
     int n;
     char arr[110][110];
     cin >> n;
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               cin >> arr[i][j];
          }
     }
     bool suc = 1;
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               int cnt = 0;
               if (i!=0 && arr[i-1][j] == 'o') cnt ++;
               if (i!=n-1 && arr[i+1][j] == 'o') cnt ++;
               if (j!=0 && arr[i][j-1] == 'o') cnt ++;
               if (j!=n-1 && arr[i][j+1] == 'o') cnt ++;
               if (cnt % 2 != 0){

                    suc = 0;
                    break;
               }
          }
          if (!suc) break;
     }
     if (suc ) cout << "YES\n";
     else cout << "NO\n";

	return 0;
}
