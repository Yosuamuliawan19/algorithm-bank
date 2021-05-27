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
int tc, n, m, arr[100000] = {0};
string s;
char c;
pair<int,int> v[1000000];
int man (int x, int y, int a, int b){
     return ((x-a) >= 0 ? (x-a) : (a-x))  + ((y-b) >= 0 ? (y-b) : (b-y));
}
int main()
{
	scanf("%d",&tc);
     while (tc--){
          scanf("%d%d\n",&n,&m);
          for (int i=0;i<=n+m;i++) arr[i] = 0;
          int idx = 0;
          for (int i=0;i<n;i++){
               for (int j=0;j<m;j++){
                    scanf("%c",&c);
                    if (c == '1') {
                         v[idx++] = mp(i,j);
                    }
               }
               scanf("\n");
          }


          for (int i=1;i<=n+m-2;i++){
               if (i != 1) printf(" ");
               printf("%d",arr[i]);
          }
          printf("\n");
     }
	return 0;
}
