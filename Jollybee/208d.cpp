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
     int n, prize[5], arr[50];
     cin >> n;
     for (int i=0;i<n;i++){
          cin >> arr[i];
     }
     for (int i=0;i<5;i++) cin >> prize[i];
     int tot = 0;
     int ans[5] = {0};
     for (int i=0;i<n;i++){
          tot += arr[i];
          for (int j=4;j>=0;j--){
               if (prize[j] <= tot){
                    tot -= prize[j];
                    ans[j] ++;
               }
          }
     }
     for (int i=0;i<5;i++){
          if (i != 0) cout << " ";
          cout << ans[i];
     }
     cout << endl;

	return 0;
}
