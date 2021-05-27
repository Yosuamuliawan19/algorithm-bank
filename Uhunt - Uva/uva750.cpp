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
bool test(vector<int> v){
     for (int i=0;i<8;i++){
          for (int j=i+1;j<8;j++){
               if (j-i == abs(v[i]-v[j])) return 0;
          }
     }
     return 1;
}
void gen(int r, int c){
     // cout << r << "-" << c << endl;
     vector<int> v(8);
     for (int i=0;i<8;i++){
          v[i] = i;
     }
     int cnt = 1;

     do {
          if (v[c] != r) continue;
          if (test(v)){
               // cout << " " << cnt++ << "      ";
               // for (int i=0;i<8;i++){
               //      if (i != 0) cout << " ";
               //      cout << v[i]+1;
               // }cout << endl;

               printf("%2d      %d", cnt++, v[0] + 1);
     		for (int j = 1; j < 8; j++) {
     			printf(" %d", v[j] + 1);
     		}
     		printf("\n");
          }
     }while (next_permutation(v.begin(), v.end()));
}
int main()
{
     int t,a,b;
     cin >> t;
     while (t--){
          cin >> a >> b;
          printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");

          gen(a-1,b-1);
          if (t) cout << "\n";
     }

	return 0;
}
