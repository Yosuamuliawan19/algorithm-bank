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
#include<climits>
#include<set>
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

pair<int,int> arr[4];
char ch[4] = {'A','B','C','D'};
int main(int argc, char const *argv[])
{
     int tot = 0;
     int tmp;
	for (int i=0;i<4;i++){
          cin >> tmp;
          tot += tmp;
          arr[i].fi = tmp;
          arr[i].se = i;
     }
     sort(arr, arr+4, greater<pair<int,int> >());
     string s = "";
     for (int i=0;i<4;i++){
          int idx = i+1;
          while (arr[i].fi != 0){
               if (arr[idx].fi == 0){
                    if (idx == 4) break;
                    idx ++; continue;
               }
               arr[i].fi--;
               arr[idx].fi--;
               s += ch[arr[i].se];
               s += ch[arr[idx].se];
          }

     }

     cout << s << endl;

	return 0;
}
