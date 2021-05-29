#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
using namespace std;
ll dirx[4] = {1, -1, 0, 0};
ll diry[4] = {0, 0, 1, -1};
string s, prv = "";
ll idx = 0;

int main (){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     vector<vector<int> > adj;
     vector<int> indeg;
     map<char, int> mp;
     map<int, char> mp2;
     while (cin >> s){
          if (s == "#") break;
          for (int i=0;i<min(s.length(), prv.length());i++){
               if (s[i] != prv[i]){
                    if (mp.find(s[i]) == mp.end()){
                         mp[s[i]] = idx;
                         mp2[idx++] = s[i];
                         adj.pb(vector<int>());
                         indeg.pb(0);
                    }
                    if (mp.find(prv[i]) == mp.end()){
                         mp[prv[i]] = idx;
                         mp2[idx++] = prv[i];
                         adj.pb(vector<int>());
                         indeg.pb(0);
                    }
                    // cout << s[i] << " " << prv[i] << endl;
                    // cout << mp[s[i]] << " " << mp[prv[i]] << endl;
                    adj[mp[prv[i]]].pb(mp[s[i]]);
                    indeg[mp[s[i]]]++;
                    // cout << indeg[mp[s[i]]] << " " << endl;
                    break;
               }
          }
          prv = s;
     }

     // for (int i=0;i<indeg.size();i++){
     //      cout << indeg[i] << " ";
     // }cout << endl;
     queue<int> q;
     for (int i=0;i<indeg.size();i++){
          if (indeg[i] == 0){
               q.push(i);
          }
     }
     while (!q.empty()){
          ll cur = q.front(); q.pop();
          cout << mp2[cur];
          for (int i=0;i<adj[cur].size();i++){
               ll next = adj[cur][i];
               indeg[next] --;
               if (indeg[next] == 0){
                    q.push(next);
               }
          }
     }cout << endl;


     return 0;
}
