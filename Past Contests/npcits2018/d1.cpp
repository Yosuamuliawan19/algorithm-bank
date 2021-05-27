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
ll arr[100100], idx = 0, tmp, n;
map<ll, int> m;

int main(int argc, char const *argv[])
{
     string s;
     getline(cin , s);
     stringstream ss(s);
     while (ss >> tmp){
          arr[idx] = tmp;
          idx++;
          m[tmp]++;
     }
     cin >> n;
     bool f = 0;
     for (int i=0;i<idx;i++){
          ll cur = n - arr[i];
          if (m.find(cur) != m.end()){
               if (cur == arr[i] && m[cur] == 1) continue;
               f = 1;
               break;
          }
     }    
     if (f){
          cout << "ADA\n";
     }else{
          cout << "TIDAK ADA\n";
     }
	return 0;
}
