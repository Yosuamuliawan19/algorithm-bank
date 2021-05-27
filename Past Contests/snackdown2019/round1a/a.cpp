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
int tc, n;
int main()
{
	cin >> tc;
     while (tc--){
          cin >> n;
          string s;
          map<string, double> mapp;
          double tot = 0;
          for (int i=0;i<n;i++){
               cin >> s;
               if (mapp.find(s) != mapp.end()){
                    tot += (mapp[s]/2.0);
                    // cout << mapp[s]/2.0 << endl;
                    continue;
               }
               double word = 0;
               for (int j=0;j<s.length();j++){
                    if (j == 0){
                         word += 0.2;
                         continue;
                    }
                    if ((s[j-1] == 'd' && s[j] == 'f') || (s[j-1] == 'f' && s[j] == 'd') || s[j] == s[j-1]){
                         word += 0.4;
                    }else if ((s[j-1] == 'j' && s[j] == 'k') || (s[j-1] == 'k' && s[j] == 'j') ){
                         word += 0.4;
                    }else{
                         word += 0.2;
                    }
               }
               tot += word;
               // cout << word << endl;
               mapp[s] = word;
          }
          cout << tot*10 << endl;
     }
	return 0;
}
