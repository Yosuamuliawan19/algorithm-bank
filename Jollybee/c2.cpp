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
     map<ll,ll> m;
     int n, cur;
     char q;
     int idx1 = 0, idx2 = 1;


     cin >> n;
     for (int i=0;i<n;i++){
          cin >> q >> cur;
          if (q == 'L'){
               m[cur] = idx1;
               idx1--;
          }else if (q == 'R'){
               m[cur] = idx2;
               idx2++;
          }else{
               int idx = m[cur];
               cout << min(abs(idx2-idx), abs(idx1-idx)) << endl;
          }
     }

	return 0;
}
