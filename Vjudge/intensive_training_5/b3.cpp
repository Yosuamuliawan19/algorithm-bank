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
struct elem{
     int a, b, i;
}x[100010], y[100010];
int n, sum = 0;
bool vis[100010];
int sonx[100010] ={0}, sony[100010]={0}, ans[100010]={0};

bool comp1(elem a, elem b){
     if (a.a == b.a) return a.b < b.b;
     else return a.a < b.a;
}
bool comp2(elem a, elem b){
     if (a.b == b.b) return a.a < b.a;
     else return a.b < b.b;
}
void dfs(int cur){
     vis[cur] = 1;
     sum++;
     int a = sonx[cur], b= sony[cur];
     if (!vis[a] && a != -1) dfs(a);
     if (!vis[b] && b != -1) dfs(b);
}
int main()
{
     // freopen("codecoder.in", "r", stdin);
     // freopen("codecoder.out", "w", stdout);
     memset(vis,0,sizeof(vis));
	cin >> n;
     for (int i=0;i<n;i++){
          cin >> x[i].a >> x[i].b;
          x[i].i = i;
          y[i] = x[i];
     }
     sort(x,x+n,comp1);
     sort(y,y+n,comp2);
     for (int i=0;i<n;i++){
          sonx[i] = -1;
          sony[i] = -1;
     }
     for (int i=1;i<n;i++){
          if (x[i].a > x[i-1].a){
               sonx[x[i].i] = x[i-1].i;
               // cout << x[i].i << " "<< x[i-1].i << endl;
          }
          if (y[i].b > y[i-1].b) {
               sony[y[i].i] = y[i-1].i;
               // cout << y[i].i << " " << y[i-1].i <<endl;
          }
     }
     for (int i=0;i<n;i++){
          if(!vis[x[i].i]) dfs(x[i].i);
          if(!vis[y[i].i]) dfs(y[i].i);
          ans[y[i].i] = sum -1;
     }
     for (int i=0;i<n;i++){
          cout << ans[i] <<endl;
     }

	return 0;
}
