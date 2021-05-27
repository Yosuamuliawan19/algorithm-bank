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
     int n;
     char arr[330][330];
     set<char> st;


     cin >> n;
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               cin >> arr[i][j];
               st.insert(arr[i][j]);
          }
     }
     if (st.size() > 2) {
          cout << "NO\n";
          return 0;
     }
     char a = arr[0][0], b = arr[0][1];
     bool suc = 1;
     for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
               if (i == j) {
                    if (arr[i][j] != a)suc = 0;
               }
               else if (i == n-j-1){
                    if (arr[i][j] != a) suc = 0;
               }
               else if (arr[i][j] != b) suc = 0;
               // if (suc == 0) cout << i << " " << j << " " </< arr[i][j] << " " << a << endl;
          }
     }

     if (suc && a != b) cout << "YES\n";
     else cout << "NO\n";


	return 0;
}
