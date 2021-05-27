#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	long long n , t;
	cin >> n >> t;
	double d[1001] = {0};
	double s[1001] = {0};
	double mins = 1001;
	for (long long i=0;i<n;i++){
		cin >> d[i] >> s[i];
		if (s[i] < mins) mins = s[i];
	}

	double top = 1000000000, bot = -mins;
	double cnt = 0; double ans = -1;
	while (1){
		cnt ++ ; if (cnt == 1001) break;

		double mid = (top + bot) /2 ;
		// cout << top << " " << bot << " " << mid << endl;
		double tt = 0;
		for (long long i=0;i<n;i++){
			tt +=( d[i] / (s[i] + mid));
		}
          cout << mid << " " <<tt << endl;
		if (tt >= t){
			bot = mid;
			ans = mid;
		}else{
			top = mid;
		}
	}
	cout << fixed << setprecision(9) << ans << endl;

}
