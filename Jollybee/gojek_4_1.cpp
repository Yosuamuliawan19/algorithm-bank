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
int main()
{
     ll tc, t = 1;
     cin >> tc;
     while (tc--){
          ll cnt = 0 , a, b, k;
          cin >> a >> b >> k;
          for (ll i=a;i<=b;i++){
                if (i%k == 0){
                     // cout << i << endl;
                     cnt++;
                }
          }
          cout << "Case " << t++ << ": " << cnt << endl;
     }

	return 0;
}
