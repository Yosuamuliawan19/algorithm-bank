#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	string a, b;
	while ( cin >> a ){
		
	}
	while(getline(cin , a)){
		getline(cin , b);
		long long lena = a.length();
		long long lenb = b.length();
		long long tota = 0, totb = 0;
		//cout << a << endl << b << endl;
		for (long long i = 0; i < lena; ++i)
		{
			if (a[i] < 97){
				a[i] += 32;
			}
			if (a[i] < 97 || a[i] > 122 ){
				continue;
			}
			tota += a[i] - 96;
			//cout <<a[i] <<  tota << endl;
		}

		while (tota > 9){
			int temp = tota;
			long long  tot = 0;
			while (temp != 0){
				tot += temp % 10;
				temp  /= 10;
			}
			tota = tot;
		}
		for (long long i = 0; i < lenb; ++i)
		{
			if (b[i] < 97){
				b[i] += 32;
			}
			if (b[i] < 97 || b[i] > 122 ){
				continue;
			}
			totb += b[i] - 96;
		//	cout <<b[i] <<  totb << endl;
		}
		while (totb > 9){
			int temp = totb;
			long long  tot = 0;
			while (temp != 0){
				tot += temp % 10;
				temp  /= 10;
			}
			totb = tot;
		}
		
		if (tota < totb){
			double res = 100.0 *  (double) tota / (double)totb;
			res *= 100;
			res = round(res);
			cout  << setprecision(2) << fixed <<  res/100.0 << " %" <<endl;
		}else{
			double res = 100.0 *  (double) totb / (double)tota;
			res *= 100;
			res = round(res);
			cout  << setprecision(2) << fixed <<  res/100.0 << " %" <<endl;
		}
	}
	return 0;
}