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
int tc, n, arr[100010], cpy[100010];
int main()
{
	scanf("%d",&tc);
     while (tc--){
          scanf("%d",&n);
          for (int i=0;i<n;i++){
               scanf("%d",&arr[i]);
          }

          for (int lim=1000;lim>=1;lim--){
               for (int i=0;i<n;i++) cpy[i] = arr[i];
               for (int i=0;i<n;i++){
                    if (cpy[i] != -1 && cpy[i] == -1){
                         int idx = i+1, val = cpy[i]+1;
                         while (arr[idx] == -1){
                              arr[idx++] = val++;
                              if (val > lim) val = 1;
                         }
                    }
               }
               for (int i=0;i<n;i++){
                    cout << arr[i] << " ";
               }cout << endl;
          }
     }

	return 0;
}
