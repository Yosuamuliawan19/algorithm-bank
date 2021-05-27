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
     int n, t, arr[100010], cur;
     cin >> n >> t;
     int tot = 0; arr[0] = 0;
     for (int i=1;i<=n;i++){
          cin >> cur;
          tot += cur;
          arr[i] = tot;
     }
     // for (int i=1;i<=n;i++){
     //      cout << arr[i] << " ";
     // }cout << endl;
     int mx = 0;
     for (int i=1;i<=n;i++){
          int l = i, r = n;
          // cout << "trying " << i << " " << arr[i] << endl;
          while (r >= l){
               int m = (l+r)/2;
               int now = arr[m]- arr[i-1];
               // cout << m << " " << now << endl;
               if (now > t){
                    r = m-1;
               }else{
                    // cout << m-i+1 << endl;
                    mx = max(mx, m-i+1);
                    l = m+1;
               }
          }
     }
     cout << mx << endl;



	return 0;
}
