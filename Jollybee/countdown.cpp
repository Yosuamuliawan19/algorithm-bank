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

int main()
{
     int tc,n,d,m;
     string tmp1, tmp2;
     map<string,int> mp1;
     map<int,string> mp2;

     cin >> tc;
     while (tc--){
          cin >> n >> d;
          cout << n << " " << d << endl;
          int tot = 0;
          for (int i=0;i<n;i++){
               cin >> tmp1 >> m;
               int x;
               if (mp1.find(tmp1) == mp1.end()){
                    x = tot ++;
                    mp1[tmp1] = x;
                    mp2[x] = tmp1;
                }else{
                    x = mp1[tmp1];
               }

               for (int j=0;j<m;j++){
                    cin >> tmp2;
                    int y;
                    if (mp1.find(tmp2) == mp1.end()){
                         y = tot++;
                         mp1[tmp2] = y;
                         mp2[y] = tmp2;
                    }else{
                         x = mp1[tmp2];
                    }
               }
          }
     }
	return 0;
}
