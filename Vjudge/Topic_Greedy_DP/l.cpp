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

int s, n, w[2100], val[2100];
int memo[2100][2100] = {0};
int knap(int weight, int idx){
     if (idx > n) return 0;
     if (weight < 0) return 0;
     if (memo[weight][idx] != -1) return memo[weight][idx];
     if (w[idx] > weight) return knap(weight, idx+1);
     return memo[weight][idx] = max(val[idx] + knap(weight-w[idx], idx+1), knap(weight, idx+1));
}
int main(int argc, char const *argv[])
{
     for (int i=0;i<2100;i++){
          for (int j=0;j<2100;j++){
               memo[i][j] = -1;
          }
     }
     cin >> s >> n;
     for (int i=0;i<n;i++){
          cin >> w[i] >> val[i];
     }
     cout << knap(s, 0) << endl;


	return 0;
}
