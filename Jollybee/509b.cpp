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
     int n, k, cur, arr[110];
     cin >> n >> k;

     int mx = INT_MIN, mn = INT_MAX;
     for (int i=0;i<n;i++){
          cin >> arr[i];
          mx = max(mx, arr[i]);
          mn = min(mn, arr[i]);
     }
     if (mx-mn > k){
          cout << "NO\n";
          return 0;
     }
     for (int i=0;i<n;i++){
          for (int j=0;j<arr[i];j++){
               if (j < mn) cout << 1;
               else {
                    for (int m=2;m<=2+arr[j]-mn;m++){
                         cout << m;
                    }
               }
               cout << " ";
          }
          cout << endl;
     }



	return 0;
}
