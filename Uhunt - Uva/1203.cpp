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
#include<queue>


// #include <bits/stdc++.h>

#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main(int argc, char const *argv[])
{
	priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > pq;
     map<int,int> m;
     string s;
     int a, b, q;
     while (cin >> s){
          if (s == "#") break;
          cin >> a >> b;
          pq.push(make_pair(b,a));
          m[a] = b;
     }
     cin >> q;

     while (q--){
          a = pq.top().first;
          b = pq.top().second;
          pq.pop();
          cout << b  << endl;
          pq.push(make_pair(a+m[b], b));
     }
	return 0;
}
