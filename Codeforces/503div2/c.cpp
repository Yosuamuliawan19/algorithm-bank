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
#include<climits>
#include<set>
#include<queue>
#include<string>
using namespace std;
// #include <bits/stdc++.h>
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

vector< priority_queue<int, vector<int>, greater<int> > >pq(3100,priority_queue<int, vector<int>, greater<int> >());
vector< pair<int,int> > arr;
void swap(int x, int y){
     pair<int,int> tmp = arr[x];
     arr[x] = arr[y];
     arr[y] = tmp;
}
int main(int argc, char const *argv[])
{
	int n, m, a, b;
     cin >> n >> m;
     arr = vector< pair<int,int> >(m, mp(0,0));
     for (int i=0;i<m;i++) arr[i].se = i;
     for (int i=0;i<n;i++){
          cin >> a >> b;
          if (a != 1){
               pq[a-1].push(b);
               cout << a <<" "<< pq[a].top() << endl;
          }
          arr[a-1].fi++;
     }
     sort(arr.begin(), arr.end());
     int idx = 0;
     for (int i=0;i<n;i++){
          cout << arr[i].fi << " ";
          if (arr[i].se == 0){
               idx = i;
               // idx = i; break;
          }
     }
     cout << endl;
     int cost = 0;
     while (1){
          int nxt = arr[idx+1].se;
          cout << idx << " " << nxt << endl;
          if (idx == 0){
               cout << "hey\n";
               int cand2 = pq[nxt].top();
               cost += cand2;
               pq[nxt].pop();
               arr[idx].fi ++;
               arr[nxt].fi --;
               cout << arr[idx].fi << " " << arr[nxt].fi << endl;
               if (arr[idx].fi > arr[nxt].fi){
                    swap(idx, nxt);
                    cout <<"swap\n";
               }
               continue;
          }
          int prev = arr[idx-1].se;
          cout << idx << " " << prev << " "<< nxt << endl;
          int cand1 = pq[prev].top(), cand2 = pq[prev].top();
          if (cand1 < cand2){
               cost += cand1;
               pq[prev].pop();
               arr[idx].fi ++;
               arr[prev].fi --;
          }else{
               cost += cand2;
               pq[nxt].pop();
               arr[idx].fi ++;
               arr[nxt].fi --;
          }
          if (arr[idx].fi > arr[nxt].fi){
               swap(idx, nxt);
          }
          if (idx == m-1) break;
     }
     cout << cost << endl;
	return 0;
}
