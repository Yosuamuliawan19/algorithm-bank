#include<iostream>
#include<vector>
#include<iomanip>
#include<math.h>

using namespace std;
typedef long long ll;
int main (){
	ll n, x, y;
	while (cin >> n){
		if (n == 0) break;
		vector<pair<ll,ll> > points;

		for (ll i=0;i<n;i++){
			cin >> x >> y;
			points.push_back(make_pair(x,y));

		}

		long double ans = 0;
		for (int i=0;i<n-1;i++){
			ans += (points[i].first * points[i+1].second);
		}
		ans += (points[n-1].first * points[0].second);
		for (int i=0;i<n-1;i++){
			ans -= (points[i].second * points[i+1].first);
		}
		ans -= (points[0].first * points[n-1].second);
		// cout << ans <<endl;
		if (ans >0){
			cout << "CCW ";
		}else{
			cout << "CW ";
		}
		cout << fixed << setprecision(1) << abs (ans) /2 << " " << endl;

	}


	return 0;
}
