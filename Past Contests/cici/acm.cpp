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
     string cur;
     while (cin >> n){
          if (!n) break;
          set<string> st;
          for (int i=0;i<n;i++){
               cin >> cur;
               st.insert(cur);
          }
          while (getline(cin, cur)){
               if (cur == "LAST CASE") break;
               cout << cur << endl;
               stringstream ss(cur);
               string acr;
               ss >> acr;
               vector<pair<char,int> > arr;
               set<char> stt
               while (ss >> cur)

               cout << acr << endl;
          }
     }

	return 0;
}
