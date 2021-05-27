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
     int n, m, cur, cnt = 0, check[200100] = {0};
     set<int> st;
     scanf("%d",&n);
     for (int i=0;i<n;i++){
          scanf("%d", &cur);
          st.insert(cur);
     }


     for (int i=0;i<=200000;i++){
          if (st.find(i) != st.end() && st.find())
     }


     scanf("%d",&m);
     for (int i=0;i<m;i++){
          scanf("%d", &cur);
          if (check[cur]) cnt ++;
     }
     printf("%d\n",cnt);



	return 0;
}
