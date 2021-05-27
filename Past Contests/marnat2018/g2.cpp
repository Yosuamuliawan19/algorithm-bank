#include<iostream>
// #include<stdio.h>
#include<string>
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
#include<cstring>
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

int N;
int A[100010];
int dp[100010];

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	for(int Case=1;Case<=tc;Case++){
		memset(dp,0,sizeof(dp));
		cin>>N;
		for(int i=1;i<=N;i++){
			cin>>A[i];
		}
		int Mx=0;
		for(int i=2;i<=N;i++){
			dp[i]=max(dp[i-1],dp[i-2]+A[i]);
			Mx=max(Mx,dp[i]);
			// cout<<dp[i-1]<<" "<<A[i]<<endl;
		}
		// Case 1 :8
		cout<<"Case "<<Case<<":"<<Mx<<endl;
	}

	return 0;
}
