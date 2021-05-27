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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
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



int main(int argc, char const *argv[])
{
     int n, k;
     string s;
     int a;
     stack<int> comm;
     cin >> n  >> k;
     for (int i=0;i<k;i++){
          cin >> s;
          if (s == "undo"){
               cin >> a;
               while (a-- && !comm.empty()) comm.pop();
          }else{
               stringstream ss(s);
               ss >> a;
               comm.push(a);
          }
     }
     int ans = 0;
     vector<int> lst;
     while (!comm.empty()){
          lst.pb(comm.top());
          comm.pop();
     }
     for (int i=lst.size()-1;i>=0;i--){
          int cur = lst[i];
          ans += cur;
          // cout << ans << endl;
          if (ans > n) ans %= n;
          else if (ans < 0) ans = (n -(abs(ans)%n))%n;

     }
     cout << ans << endl;
	return 0;
}
