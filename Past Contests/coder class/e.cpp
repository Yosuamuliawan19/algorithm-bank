#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<queue>


// #include <bits/stdc++.h>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
vector<vector<int> > adjList;
int main(int argc, char const *argv[])
{
     int tc;
     int n,m,z,a,b;
     cin >> tc;
     while (tc --){
          cin >> n >> m >> z;
          adjList = vector<vector<int> >(n);
          for (int i=0;i<m;i++){
               cin >> a >> b;
               adjList[a-1].push_back(b-1);
               adjList[b-1].push_back(a-1);
          }
          vector<bool> vis(n,0);
          queue<pair<int,int> > q;
          q.push(make_pair(1,z-1));
          vis[z-1] = 1;
          int mx = 0;
          while (!q.empty()){
               int cur = q.front().second;
               int no = q.front().first;
               if (no > mx) mx = no;
               // cout << cur+1 << " " << no << endl;
               q.pop();
               for (int i=0;i<adjList[cur].size();i++){
                    int next = adjList[cur][i];
                    // cout << "nxt " << next+1 << endl;

                    if (!vis[next]){
                         q.push(make_pair(no+1, next));
                         vis[next] =1;
                    }
               }
          }
          cout << mx << endl;
     }
	return 0;
}
