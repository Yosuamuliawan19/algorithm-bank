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
int cnt = 0;
int t,n,goal;
void hanoi(int n, char from, char to, char aux){
     if (n == 1) {
          cnt ++;
          if (cnt == goal)
          {
               cout << 1 << " : " << from << " => " << to << endl;
               return;
          }
          return;
     }
     hanoi(n-1, from, aux, to);
     cnt ++;
     if (cnt == goal){
          cout << n << " : " << from << " => " << to << endl;
          return;
     }
     hanoi(n-1, aux, to, from);
}
int main()
{

     cin >> t;
     while (t--){
          cnt = 0;
          cin >> n >> goal;
          hanoi(n, 'A', 'C', 'B');
     }


	return 0;
}
