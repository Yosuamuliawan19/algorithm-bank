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
     ll x, y, n;
     cin >> x >> y >> n;
     ll arr[20];
     arr[1] = x;
     arr[2] = y;
     for (int i=3;i<=6;i++){
          arr[i] = arr[i-1]-arr[i-2];
     }
     ll idx = n%6;
     if (idx == 0) idx = 6;

     if (arr[idx] >= 0){
          cout << arr[idx] % 1000000007 << endl;
     }else{
          cout << (1000000007 - (abs(arr[idx])%1000000007))% 1000000007<< endl;
     }






	return 0;
}
