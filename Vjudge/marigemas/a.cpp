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
const int sz = 1000000;
ll arr[2*sz];
ll n, longest = -1, h,rise,st;


int main(int argc, char const *argv[])
{

	cin >> n;
     for (int t=0;t<n;t++){
          cin >> h >> rise >> st;
          longest = max(longest, h*1825);
          for (int i=0;i*h<sz;i++){
               if (rise < st){
                    for (int j=rise+1;j<st;j++) {
                         arr[(i*h)+j] = 1;
                         // cout << (i*h) + j << " " ;
                    }
                    // cout << endl;
               }else{
                    for (int j=0;j<st;j++) {
                         arr[(i*h)+j] = 1;
                         // cout << (i*h) + j << " " ;
                    }
                    for (int j=rise+1;j<h;j++) {
                         arr[(i*h)+j] = 1;
                         // cout << (i*h) + j << " " ;
                    }
                    // cout << endl;
               }
          }
     }
     for (int i=0;i<longest;i++){
          if (arr[i] == 0){
               cout << i << endl;
               return 0;
          }
     }
     cout << "impossible\n";
	return 0;
}
