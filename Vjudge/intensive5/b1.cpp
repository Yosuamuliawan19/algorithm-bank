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
int n, a, b;
int mx[sz] = {0}, mn[sz] = {0};
int upper(int find){
     cout << "finding " << find << endl;
     int l = 1, r = n;
     while ( r >= l ){
          int m = (l+r)/2;
          cout << l << " " << r << " " << mn[m] << endl;
          if (mn[m] <= find){
               l = m+1;
          }else{
               r = m-1;
          }
     }
     cout << l << " " << r << endl;
     return l;
}
int main()
{
	scanf("%d",&n);
     for (int i=1;i<=n;i++){
          scanf("%d%d",&a,&b);
          mn[i] = min(a,b);
          mx[i] = max(a,b);
     }
     sort(mn, mn+n+1);
     for (int i=0;i<=n;i++){
          cout << mn[i] << " ";
     }
     cout << endl;
     for (int i=1;i<=n;i++){
          int found = upper(mx[i]-1);
          cout << found << endl;
     }

	return 0;
}
