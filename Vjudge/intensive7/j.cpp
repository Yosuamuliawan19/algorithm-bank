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
#include<sstream>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#include<deque>
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
int n, idx = 1, cur;
char q;
int main()
{
     scanf("%d",&n);
     deque<int> dq;
     while (n--){
          scanf("%c",&q);
          if (q == 'F'){
               dq.push_front(idx++);
          }else if (q == 'B'){
               
          }else{
               scanf("%d",&cur);
          }
     }


	return 0;
}
