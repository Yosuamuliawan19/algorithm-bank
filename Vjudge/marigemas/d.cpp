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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
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



int main(int argc, char const *argv[])
{
     string s, nw;
     cin >> s;
     nw = s;
     sort(nw.begin(), nw.end());
     for (int i=0;i<s.size();i++){
          if (nw[i] == s[i]) continue;
          for (int j=i+1;j<s.size();j++){
               if (s[i] == nw[j]){
                    if (nw[i] > nw[j]){
                         cout << i+1 << " " << j+1 << endl;
                    }else{
                         cout << j+1 << " " << i+1 << endl;
                    }
                    swap(nw[j],nw[i]);
                    break;
               }

          }
     }

	return 0;
}
