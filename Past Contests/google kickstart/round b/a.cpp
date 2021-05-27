#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;
vector<int> sum;
long long lim = pow(10,18) + 1;
void sieve(){
	sum = vector<int>(lim);
	long long acc = 0;
	for (long long i=1;i<lim;i++){
		
		long long cur = i;
		if ((i > 90 && i < 99) ||
			(i > 900 && i < 999) ||
			(i > 9000 && i < 9999) ||
			(i > 90000 && i < 99999) ||
			(i > 900000 && i < 999999) ||
			(i > 9000000 && i < 9999999) ||
			(i > 90000000 && i < 99999999) ||
			(i > 900000000 && i < 999999999) ||
			(i > 9000000000 && i < 9999999999) ||
			(i > 90000000000 && i < 99999999999) ||
			(i > 900000000000 && i < 999999999999) ||
			(i > 9000000000000 && i < 9999999999999) ||
			(i > 90000000000000 && i < 99999999999999) ||
			(i > 900000000000000 && i < 999999999999999) ||
			(i > 9000000000000000 && i < 9999999999999999) ||
			(i > 90000000000000000 && i < 99999999999999999) ||
			(i > 900000000000000000 && i < 999999999999999999) ||
			(i > 9000000000000000000  && i < 9999999999999999999) ||
			(cur % 9 == 0)){		
				sum[i] = acc;
			}else{
				bool flag = true;
				while (cur != 0){
					if (cur % 10 == 9) flag = false;
					cur /= 10;
				}
				if (flag) acc++;
				
				sum[i] = acc;
			}
	
	}
}
int main (){
	sieve();
//	freopen ("ans_a.txt","w",stdout);
//  	freopen ("a_attempt.in","r",stdin);

	long long tc, f, l;
	cin >> tc;
	int cas = 1;
	while (tc-- ){
		cin >> f >> l;
		cout << "Case #" << cas << ": " << sum[l] - sum[f] + (sum[f] - sum[f-1])<< endl;
		cas ++ ;
	}
	
	
	return 0;
}
