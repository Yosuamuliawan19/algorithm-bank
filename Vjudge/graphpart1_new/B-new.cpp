//Template Jollybee 2017-0720 ver.1
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<map>
using namespace std;
//include isi sendiiri

//typedef pakai huruf kecil semua
typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;

const int /* ato ll */ INF=(int)2e9; //tergantung soalnya
const double EPS=(double)1e-9;
const double PI=(double)acos(-1.0);
const ll MOD=(ll)1e9+7; //tergantung soalnya

//Macro yang umum
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

//increasing
#define FOR(i,n) for(int i=0;i<n;i++)
#define REPP(i,l,r,c) for(int i=l;i<=r;i+=c)
#define REP(i,l,r) REPP(i,l,r,1)

//decreasing
#define FORD(i,n) for(int i=n-1;i>=0;i--)
#define REVV(i,l,r,c) for(int i=max(l,r),_m=min(l,r);i>=_m;i-=c)
#define REV(i,l,r) REVV(i,l,r,1)

//memset pakai std::fill

//random
int irand(int lo, int hi){
	return (((double)rand())/(RAND_MAX+1.0)) * (hi-lo+1) + lo;
}

//ll to string
string toString(ll x) {
	stringstream ss;
	ss << x;
	return ss.str();
}

//string to ll
ll toNumber(string S) {
	ll ret;
	sscanf(S.c_str(),"%lld",&ret);
	return ret;
}

//end of template

bool isP[1000010];


int main(){
	int N = 1000000;
	int sq = sqrt(N);
	vector<int> prime;
	memset(isP, 0, sizeof(isP));

	for(int i=2;i<=sq;i++){
		if(!isP[i]){
			prime.pb(i);
			for(int j=i*i;j<=N;){
				isP[j] = 1;
				j += i;
			}
		}
	}

//	for(int i=1000;i<=1000100;i++){
//		if(!isP[i])prime.pb(i);
//	}
//
//	cout<<prime.size()<<'\n';

	int t, n;
	cin>>t;

	while(t--){
		cin>>n;
		int ar[100010];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}

		ll st = 0;
		for(int i=0;i<prime.size();i++){
			int sm = 0;
			for(int j=0;j<n;j++){
				if((ar[j] % prime[i]) == 0){
					sm++;
					while(ar[j]%prime[i]==0)ar[j]/=prime[i];
				}
			}

			st += (sm/3);
			if((sm%3) != 0){
				st++;
			}
		}

		map<int,int>mp;

		for(int i=0;i<n;i++){
			if(ar[i]!=1)mp[i]++;
		}

		for(auto it:mp){
			st+=(it.second+2)/3;
		}

		cout<<st<<endl;
	}
	return 0;
}
