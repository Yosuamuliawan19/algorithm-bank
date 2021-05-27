#include<iostream>
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
typedef long long ll;
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

using namespace std;
ll tc, k, r, w[200], val[200], n;
pair<ll, pair<ll,ll> > memo[1000][200];
pair<ll, pair<ll,ll> > knap(int cap, int idx){
     if (idx >= n || cap <= 0) {
		return mp(0,mp(0,0));
	}
     if (memo[cap][idx].fi != -1) return memo[cap][idx];


	pair<ll, pair<ll,ll> > ret = knap(cap,idx+1);

	if (cap-w[idx] >= 0){
		pair<ll, pair<ll,ll> > now = knap(cap-w[idx],idx+1);
		now.fi += val[idx];
		now.se.fi += w[idx];
		now.se.se += 1;
		if (now.fi > ret.fi) ret = now;

	}
     return memo[cap][idx] = ret;
}

int main(){
     cin >> tc;
     while (tc--){
          memset(memo,-1,sizeof(memo));
          cin >> n;
          for (ll i=0;i<n;i++) cin >> val[i] >> w[i];
          pair<ll, pair<ll,ll> > ans = knap(50, 0);
		// cout << ans.fi << " " << ans.se.fi <<  " " << n-ans.se.se << endl;

		printf("%lld brinquedos\n", ans.fi);
		printf("Peso: %lld kg\n", ans.se.fi);
		printf("sobra(m) %lld pacote(s)\n\n",n-ans.se.se);
     }
}
