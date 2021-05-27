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
#include<climits>
#include<set>
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

ll n,h,a,b,k;
ll sx,sy,ex,ey;
int main(int argc, char const *argv[])
{

     cin >> n >> h >> a >> b >> k;
     while(k--){
          ll steps = 0;
          cin >> sx >> sy >> ex >> ey;
          steps += abs(sx-ex);
          if (sx != ex){
               if (sy > b){
                    steps += sy-b;
                    sy = b;
               }else if (sy < a){
                    steps += a - sy;
                    sy = a;
               }
          }
          steps += abs (sy-ey);
          cout << steps << endl;
     }

	return 0;
}
