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
ll a, b;
int main()
{
	cin >> a >> b;

     ll odd, even;
     if (a%2 == 0){
          even = 1 +((b-a)/2.0);
          odd = ceil((b-a)/2.0);
     }else{
          even = ceil((b-a)/2.0);
          odd = 1 + ((b-a)/2.0);
     }
     cout << odd << " " << even << endl;



     if (a%10 != 0) a += 10;
     ll na = 10* (ll)(a / 10), nb =  10*(ll)(b / 10);
     cout << na << " " << nb << endl;


     ll o, e;
     ll diff = nb -na;
     if (na%2 == 0){
          o = 1 +(diff/2.0);
          e = ceil(diff/2.0);
     }else{
          o = ceil(diff/2.0);
          e = 1 + (diff/2.0);
     }
     cout << o << " " << e << endl;



	return 0;
}
