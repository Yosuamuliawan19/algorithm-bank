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
set<string> st;
int tc, n;
int main()
{
	cin >> tc;
	map<int, int> mp;
     while (tc--){
          cin >> n;
		if (mp.find(n) != mp.end()){
			// cout << "hey\n";
			cout << mp[n] << endl;
			continue;
		}
          char c = 'a';
          string cur = "";
          for (int i=0;i<n;i++){
               cur += c;
               cur += c;
               c++;
          }
          st.clear();
          st.insert(cur);
          do{
			string now = cur;
               for (int i=0;i<2*n;i+=2){
				sort(now.begin()+i, now.begin()+i+2);
			}
			st.insert(now);
			// cout << now <<endl;
          } while(next_permutation(cur.begin(),cur.end()));
		mp[n] = st.size();
		cout << mp[n]<< endl;
		// for (set<string>::iterator it=st.begin();it!=st.end();it++){
		// 	string now = *it;
		// 	cout << now << endl;
		// }

     }



	return 0;
}
