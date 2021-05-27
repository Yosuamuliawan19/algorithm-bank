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
bool flag = 0;
bool vis[60];
vector<vector<int> > arr(26);
int len ;
void dfs(int idx, string query){
     if (flag) return;
     if (idx >= len){
          flag = 1;
          return;
     }
     int cidx = query[idx]-'A';
     for (int i=0;i<arr[cidx].size();i++){
          int cur = arr[cidx][i];
          if (!vis[cur]){
               vis[cur] =1;
                    dfs(idx+1, query);
               vis[cur] =0;
          }
     }
}
int main()
{
	int n, q;

     string cur, input;
     scanf("%d %d\n",&n,&q);
     for (int i=0;i<n;i++) vis[i] = 0;

     int ar[26] = {0};
     for (int i=0;i<n;i++){
          getline(cin, input);
          for (int j=0;j<input.length();j++){
               if (input[j] >= 'A' && input[j] <= 'Z'){
                    ar[input[j]-'A'] = 1;
                    // cout << input[j] << endl;
               }
          }
          for (int j=0;j<26;j++){
               if (ar[j]){
                    arr[j].pb(i);
                    // cout << j << " " << i << endl;
               }
               ar[j] = 0;
          }
     }



     for (int i=0;i<q;i++){
          getline(cin, input);
          flag = 0;
          len = input.length();
          if (len > n){
               flag = 0;
          }else{
               dfs(0, input);
          }

          if (flag){
               printf("YES\n");
          }else{
               printf("NO\n");
          }
     }

	return 0;
}
