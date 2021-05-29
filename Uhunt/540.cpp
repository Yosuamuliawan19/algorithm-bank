#include<iostream>
// #include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<queue>
// #include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;


int main(int argc, char const *argv[])
{
     int n, t, tmp;
     int tc = 1;
     string s;
     while (cin >> n){
          map<int, int> m;
          if (!n) break;
          for (int i=1;i<=n;i++){
               cin >> t;
               for (int j=0;j<t;j++){
                    cin >> tmp;
                    m[tmp] = i;
               }
          }
          int f = 0;
          vector<vector<int> > que;
          vector<int> tmpar;
          cout << "Scenario #" << tc++ << "\n";
          while (cin >> s){
               if (s == "DEQUEUE"){
                    while (que[f].size() == 1){
                         f++;
                    }
                    cout <<  que[f][1] << endl;
                    tmpar.clear();
                    for (int i=0;i<que[f].size();i++){
                         if (i == 1) continue;
                         tmpar.push_back(que[f][i]);
                    }
                    que[f] = tmpar;

                    continue;
               }
               if (s == "STOP") break;
               cin >> tmp;
               // cout << tmp << endl;
               bool found = 0;
               for (int i=f;i<que.size();i++){
                    if (m[tmp] == que[i][0]){
                         que[i].push_back(tmp);
                         // cout << "push " << tmp << " to " << i << endl;
                         found = 1;
                         break;
                    }
               }
               if (!found){
                    // cout << "push new " << tmp << endl;
                    que.push_back(vector<int>(1, m[tmp]));
                    que.back().push_back(tmp);
               }
          }
          // for (int i=f;i<que.size();i++){
          //      for (int j=1;j<que[i].size();j++){
          //           cout << que[i][j] << endl;
          //      }
          // }
          cout << "\n";
     }

	return 0;
}
