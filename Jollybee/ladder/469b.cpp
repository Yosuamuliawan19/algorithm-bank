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
     int p,q,l,r,arr1[1010]={0}, arr2[1010]={0},a,b;
     cin >> p >> q >> l >> r;
     for (int i=0;i<p;i++){
          cin >> a >> b;
          for (int j=a;j<=b;j++){
               if (j > 1000) break;
               arr1[j] = 1;
          }
     }
     for (int i=0;i<q;i++){
          cin >> a >> b;
          for (int j=a;j<=b;j++){
               if (j > 1000) break;
               arr2[j] = 1;
          }
     }
     int cnt = 0;
     for (int i=l;i<=r;i++){
          // cout << i << endl;
          for (int j=0;j<=1000;j++){
               if (arr1[j] == 1){
                    if (j-i >= 0 && arr2[j-i] == 1){
                         cnt ++;
                         break;
                    }
               }
          }
     }
     cout << cnt << endl;
	return 0;
}
