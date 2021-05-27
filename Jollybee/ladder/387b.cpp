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
     int n, m, arr[4000], arr2[4000];
     cin >> n >> m;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     for (int j=0;j<m;j++){
          cin >> arr2[j];
     }
     int idxn = m-1;
     int cnt = 0;
     for (int i=n-1;i>=0;i--){
          int idx = idxn;
          while (idx >= 0 && arr[i] > arr2[idx]){
               idx--;
               if (idx < 0) break;
          }
          if (idx < 0) {
               cnt ++;
               continue;
          }
          // cout << arr[i] << " " << arr2[idx] << endl;
          idxn--;
     }
     cout << cnt << endl;


	return 0;
}
