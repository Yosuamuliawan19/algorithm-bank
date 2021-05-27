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
     int tc,arr[100010],n;
     cin >> tc;
     while (tc--){
          cin >> n;
          bool chaos = 0;
          for (int i=0;i<n;i++){
               cin >> arr[i];
               if (arr[i]-(i+1) > 2) chaos = 1;
          }
          if (chaos){
               cout << "Too chaotic\n";
               continue;
          }
          int ans = 0;
          for (int k=0;k<100;k++){
               for (int i=0;i<n-1;i++){
                    while (arr[i] > arr[i+1]){
                         swap(arr[i], arr[i+1]);
                         ans ++;
                    }
               }
          }

          cout << ans << endl;
     }


	return 0;
}
