
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
     string a, b;


     cin >> n;
     for (int i=0;i<n;i++){
          cin >> a >> b;
          set<string> st;


          bool good = 0, agood = 0;
          if (a.find(b) != string::npos) good = 1;
          string sofar = "";
          for (int j=0;j<4;j++){
               string sofar2 = sofar;
               for (int k=j+1;k<4;k++){
                    sofar2 += b[k];
               }
               sofar += b[j];
               if (a.find(sofar2) != string::npos) agood = 1;
          }
          // cout << good << " " << agood << endl;
          if (good){
               cout << "good\n";
          }else if (agood){
               cout << "almost good\n";
          }else{
               cout << "none\n";
          }
     }

	return 0;
}
