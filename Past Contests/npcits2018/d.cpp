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
ll tmp, n, arr[100010], idx = 0, cur;
string s;
map<ll,bool> m;

int main(int argc, char const *argv[])
{
     getline(cin, s);
     stringstream ss(s);
     while (ss >> tmp){
          arr[idx++] = tmp;
          m[tmp] = 1;
     }
     scanf("%lld", &n);
     bool f = 0;
     for (int i=0;i<idx;i++){
          cur = n - arr[i];
          if (m.find(cur) != m.end()){
               f = 1;
               break;
          }
     }

     if (f) {
          printf("ADA\n");
     }else{
          printf("TIDAK ADA\n");
     }

	return 0;
}
