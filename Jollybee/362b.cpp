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
     int n, m, arr[3100];
     cin >> n >> m;
     bool suc = 1;
     for (int i=0;i<m;i++){
          cin >> arr[i];
          cout << arr[i] << endl;
          if (arr[i] == 1 || arr[i] == n) suc = 0;
     }
     sort(arr, arr+m);

     for (int i=0;i<m;i++){
          int cnt = 0;
          while (arr[i] < m && arr[i]+1 == arr[i+1]){
               cnt ++;
               i++;
          }
          cout << cnt << endl;
     }


	return 0;
}
