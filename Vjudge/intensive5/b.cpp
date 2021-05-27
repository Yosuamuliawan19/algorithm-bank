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
const int sz = 100010;
int n,a,b;
vector<pair<int,int> > mn;
int idx[sz], mx[sz];
int upper(int find){
     int l = 0, r = n-1;
     int ans = -1;
     while (r >= l){
          int m = (l+r)/2;
          if (mn[m].fi <= find){
               ans = m;
               l = m+1;
          }else{
               r = m-1;
          }
     }
     return ans;
}
int main()
{
	scanf("%d", &n);
     mn = vector<pair<int,int> > (n);
     for (int i=0;i<n;i++){
          scanf("%d%d",&a,&b);
          mn[i] = mp(min(a,b),i);
          mx[i] = max(a,b);
     }
     sort(mn.begin(), mn.end());
     for (int i=0;i<n;i++){
          idx[mn[i].se] = i+1;
     }
     for (int i=0;i<n;i++){
          int found = upper(mx[i]-1);
          cout << found << endl;
          // cout << found << endl;


     }


	return 0;
}
