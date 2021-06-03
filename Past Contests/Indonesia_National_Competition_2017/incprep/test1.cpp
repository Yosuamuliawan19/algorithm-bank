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
	long long n;
	cin >> n;
	long long  arr[100001] = {0};
	if (n == 1){
		cin >> n;
		if (n == 0){
			cout << n + 1;
		}else{
			cout << n - 1 << endl;
		}
		return 0;
	}


	long long tot = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		tot += arr[i];
	}
	sort(arr , arr +n );
	if (arr[0] != 0){
		cout << 0 << endl;
	}else{
		if (tot > 1000000000 && tot < 100000000000000 ){

			for (long long i = 1000000000; i <= 100000000000000 ; ++i)
			{
				if ( i != tot){
					cout << i << endl;
					break;

				} 
			}
		}else{
			cout << "1000000001" << endl;
		}
	}
	return 0;
}