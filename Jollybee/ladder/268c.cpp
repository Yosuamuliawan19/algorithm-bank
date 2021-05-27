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
     int n, m ;
     cin >> n >> m;
     map<pair<int,int> , bool> mapp;
     for (int i=0;i<100;i++){
          for (int j=i+1;j<100;j++){
               for (int k=j+1;k<100;k++){
                    if (i*i + j*j == k*k){
                         mapp[mp(i,j)] = 1;
                         mapp[mp(j,i)] = 1;
                         // cout << i << " " << j << " " << k << endl;
                    }
               }
          }
     }
     vector<pair<int,int> > arr;
     for (int i=0;i<=n;i++){
          for (int j=0;j<=m;j++){
               if (i+j == 0) continue;
               arr.pb(mp(i,j));
          }
     }
     int sz = arr.size();
     for (int i=0;i<arr.size();i++){
          for (int j=i+1;j<arr.size();j++){
               pair<int,int> now =  mp(abs(arr[i].fi - arr[j].fi), abs(arr[i].se - arr[j].se) );

               if (mapp.find(now) != mapp.end()){
                    cout << now.fi << " " << now.se << endl;
                    sz--;
               }
          }
     }
     cout <<sz <<endl;
	return 0;
}
