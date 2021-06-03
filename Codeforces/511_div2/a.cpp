
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
int n;


int main(int argc, char const *argv[])
{

	cin >> n;
          // cout << n << " - ";

     int dv = n/3;
     if (n%3 == 0){
          if (dv % 3 == 0){
               cout << dv - 1 << " " << dv - 1 << " " << dv+2 << endl;
          }else{
               cout << dv << " " << dv << " " << dv << endl;
          }
     }else{
          for (int i=-3;i<=3;i++){
               int cur = dv+i;
               int ops = n-(2*cur);
               // cout << cur << " " << ops << endl;
               if (cur % 3 != 0 && ops % 3 != 0 && cur > 0 && ops > 0 ){
                    cout << cur << " " << cur << " " << ops << endl;
                    break;
               }
          }
     }


	return 0;
}
