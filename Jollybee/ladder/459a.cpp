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



int main(int argc, char const *argv[])
{
     int a, b, c, d;
	set<int> ex, ey;
     cin >> a >> b >> c >> d;
     ex.insert(a); ex.insert(c);
     ey.insert(b); ey.insert(d);
     if (ex.size() == 2){
          if (ey.size() == 2) {
               if (abs(c-a) != abs(d-b)) printf("-1\n");
               else printf("%d %d %d %d\n",a,d,c,b);
          }
          else printf("%d %d %d %d\n",a,b+abs(c-a),c,d+abs(c-a));
     }else{
          if (ey.size() == 2){
                printf("%d %d %d %d\n",a+abs(b-d),b,c+abs(b-d),d);
          }
          else cout << -1 << endl;
     }

	return 0;
}
