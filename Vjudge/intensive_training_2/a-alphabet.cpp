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
string s;
int n;
int ceilsearch(vector<int> &v, int l, int r, int val){
     int m;
     while (r-l>1){
          m = l + (r-l)/2;
          if (v[m] >= val) r = m;
          else l = m;
     }
     return r;
}
int lis(vector<int> &v){
     int len = 1; // nlogn
     if (v.size() == 0) return 0;
     vector<int> t(v.size(),0);
     t[0] = v[0];
     for (long long i=1;i<v.size();i++){
          if (v[i] <t[0]) t[0] = v[i];
          else if (v[i] > t[len-1]) t[len++] = v[i];
          else t[ceilsearch(t,-1,len-1,v[i])] = v[i];
     }
     return len;
}

int main()
{
     vector<int> v;
     cin >> s;
     n = s.length();
     for (int i=0;i<n;i++){
          v.pb(s[i]-'0');
     }
     cout << 26 - lis(v) << endl;


	return 0;
}
