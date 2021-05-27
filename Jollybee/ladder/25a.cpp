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
     int n, arr[120];
     cin >> n;
     int odd = 0, even = 0;
     for (int i=0;i<n;i++) {
          cin >> arr[i];
          if (arr[i]%2 == 0) even++;
          else odd++;
     }

     if (odd > even){
          for (int i=0;i<n;i++){
               if (arr[i]%2 == 0){
                    cout << i +1 << endl;
                    break;
               }
          }
     }else if (odd == even){
          cout << 1 << endl;
     }else {
          for (int i=0;i<n;i++){
               if (arr[i]%2 != 0){
                    cout << i +1 << endl;
                    break;
               }
          }
     }
	return 0;
}
