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
     int tc, n, arr[100010];
     cin >> tc;
     while (tc--){
          cin >> n;
          for (int i=0;i<n;i++)cin >>arr[i];
          int left = arr[0], days = 1, tot = arr[0];
          for (int i=1;i<n;i++){
               if (left == 0){
                    left = tot;
                    days++;
               }
               // cout << "left " << left << endl;
               left --;
               tot += arr[i];
          }
          cout << days << endl;
     }


	return 0;
}
