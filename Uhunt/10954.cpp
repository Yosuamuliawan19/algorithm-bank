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

	int n,cur;
     while (cin >> n){
          if (!n) break;
          priority_queue<int, vector<int>, greater<int> > pq;
          for (int i=0;i<n;i++){
               cin >> cur;
               pq.push(cur);
          }
          int cost = 0;
          while (pq.size() > 1){
               int a = pq.top();pq.pop();
               int b =  pq.top();pq.pop();
               pq.push(a+b);
               // cout << cost << endl;
               cost += (a+b);

          }
          cout << cost << "\n";
     }

	return 0;
}
