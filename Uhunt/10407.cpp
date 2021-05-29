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
#include<climits>
#include<set>
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
int arr[10000];
int gcd(int a,int b){
     if (a == b) return a;
     if (a > b) return gcd(a-b, b);
     return gcd(a,b-a);
}
int main(int argc, char const *argv[])
{
     int tmp;
     while (cin >> tmp){
          int mn = INT_MAX;
          if (!tmp) break;
          int idx = 0;
          arr[idx++] = tmp;
          mn = min(mn, abs(arr[idx-1]));
          while (cin >> tmp){
               if(!tmp) break;
               arr[idx++] = tmp;
               mn = min(mn, abs(arr[idx-1]));
          }
          int ans = 1;
          // cout << mn << " max" << endl;
          for (int i=1;i<mn;i++){
               if (arr[0]-i == 0 || arr[1]-i == 0) continue;
               int gc = gcd (abs(arr[0] - i), abs(arr[1] - i));
               for (int j=2;j<idx;j++){
                    int cur = abs(arr[j] - i);
                    if (cur%gc != 0) break;
                    if (j == idx-1){
                         ans = max(ans, gc);
                    }
               }
          }
          cout << ans << endl;
     }

	return 0;
}
