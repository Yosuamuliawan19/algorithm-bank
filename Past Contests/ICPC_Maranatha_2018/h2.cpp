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

int tc,n,val,back;
bool check = 1;
int dist = 0, disc = 0;
char s[5];
bool cards[52];

int main(int argc, char const *argv[])
{
	scanf("%d", &tc);
	while (tc--){
		for (int i=0;i<52;i++)cards[i]=0;
		scanf("%d", &n);
		check = 1;
		dist = 0; disc = 0;
		if (n < 52) check = 0;
		for (int i=0;i<n;i++){
			s[2] = '0';
			scanf("%s",s);
			// printf("%s\n", s);
			if (check){
				val = 0;
				back = 1;
				if (s[0] == 'A') val = 1;
	               else if (s[0] == 'J') val = 11;
	               else if (s[0] == 'Q') val = 12;
	               else if (s[0] == 'K') val = 13;
	               else if(s[2] == 'S' || s[2] == 'H'
						|| s[2] == 'D' || s[2] == 'C' ) {
					back = 2;
					val = 10;
				}
	               else val = s[0] - '0';
				if (s[back] == 'S'){
					val += 0;
				}else if (s[back] == 'H'){
					val += 13;
				}else if (s[back] == 'D'){
					val += 26;
				}else{
					val += 39;
				}
				val --;
				if (cards[val] == 0) dist++;
				else disc ++;
				cards[val] = 1;
				if (dist + n-i < 52) check = 0;
			}
		}
		// cout << n << " " <<  disc << " " << dist << endl;
          if (n < 52 || dist < 52){
               printf( "INCOMPLETE\n");
          }else{
			printf( "FULLHOUSE %d\n", disc);
          }
	}
	return 0;
}
