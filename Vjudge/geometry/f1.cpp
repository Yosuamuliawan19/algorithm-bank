#include<iostream>
#include<vector>

using namespace std;
typedef long double ll;
int main (){
	ll n, x ,y;
	vector<pair<ll,ll> > points;
	cin >> n;
	for (ll i=0;i<n;i++){
		cin >> x >> y;
		points.push_back(make_pair(x,y));
	}
	if (n <= 4){
		cout << "YES\n";
		return 0;
	}

	ll pos[3][3] = {{0,1,2},{0,2,1},{1,2,0}};
	bool flag = false;
	for (int i=0;i<3;i++){
		long double x1 = points[pos[i][0]].first, y1 = points[pos[i][0]].second;
		long double x2 = points[pos[i][1]].first, y2 = points[pos[i][1]].second;
		long double x3 = points[pos[i][2]].first, y3 = points[pos[i][2]].second;
		long double m1, c1, m2, c2;
		bool isX1 = false, isX2 = false;

		// first equation
		if (x1 == x2){
			m1 = 0;
			c1 = x1;
			isX1 = true;
		}else if (y1 == y2){
			m1 = 0;
			c1 = y1;
		}else{
			m1 = (y1 - y2) / (x1 - x2);
			c1 = y1 - m1 * x1;
		}

		long long cnt = 3;
		bool makeEquation = true;
		for (int j=3;j<n;j++){
			long double a = points[j].first , b = points[j].second;
			// cout << "trying " << a << " " << b << endl;
			if (isX1){
				if (a == c1){
					cnt ++;
					continue;
					// cout << "matching with equation 1\n";
				}
			}else{
				if (b == (m1 * a) + c1){
					cnt ++;
					continue;
					// cout << "matching with equation 1\n";
				}
			}

			if (makeEquation){
				makeEquation = false;
				long double x4 = a, y4 = b;
				if (x3 == x4){
					m2 = 0;
					c2 = x3;
					isX2 = true;
				}else if (y3 == y4){
					m2 = 0;
					c2 = y3;
				}else{
					m2 = (y3 - y4) / (x3 - x4);
					c2 = y3 - m2 * x3;
				}
				cnt ++ ;
			}else{
				if (isX2){
					if (a == c2){
						cnt ++ ;
						continue;
					}
				}else{
					if (b == (m2 * a) + c2){
						cnt ++ ;
						continue;
					}
				}
			}

		}
		if (cnt == n) {
			flag = true;
		}

	}

	if (flag){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}





	return 0;
}
