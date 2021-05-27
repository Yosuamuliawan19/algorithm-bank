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
	int n, m ;
     cin >> n >> m;
     bool left = 1,  skip = 0;

     for (int i=0;i<n;i++){
          for (int j=0;j<m;j++){
               if (skip){
                    if (left && j == 0){
                         printf("#");
                         left = !left;
                    }else if (!left && j == m-1){
                         printf("#");
                         left = !left;
                    }else{
                         printf(".");
                    }
               }else{
                    printf("#");
               }
          }
          skip = !skip;
          printf("\n");
     }

	return 0;
}
