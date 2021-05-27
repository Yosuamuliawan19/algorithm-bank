// #include<stdio.h>
// #include <bits/stdc++.h>
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
ll n, k, arr[400];
int main()
{
	cin >> n >> k;
     priority_queue<int, vector<int> , greater<int> > pq;
     for (int i=0;i<n;i++){
          cin >> arr[i];
          if (i < k) pq.push(arr[i]);
     }
     ll t = 0, ans = 0;
     while (!pq.empty()){
          t += pq.top();pq.pop();
          ans += t;
          if (k < n) pq.push(arr[k++]);
     }

     cout<<ans << endl;



	return 0;
}
