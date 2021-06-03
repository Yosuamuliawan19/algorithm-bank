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
ll n, cur;
pair<ll,ll> arr[300010];
int main()
{
	freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> cur;
		arr[i] = mp(cur,i);
	}
	sort(arr, arr+n);
	ll idx1 = arr[0].se, idx2 = arr[1].se, diff = (arr[0].fi^arr[1].fi);
	for (int i=1;i<n-1;i++){
		if ((arr[i].fi^arr[i+1].fi) < diff){
			diff = (arr[i].fi^arr[i+1].fi);
			idx1 = arr[i].se;
			idx2 = arr[i+1].se;
		}
	}
	cout << idx1+1<< " " << idx2+1 << endl;
	return 0;
}
