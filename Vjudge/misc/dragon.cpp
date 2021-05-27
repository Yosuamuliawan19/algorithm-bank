#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int tc;
	cin  >> tc;
	for (int i = 0; i < tc; ++i)
	{
		int n,a,b;
		cin >> n >> a >> b;

		int ac = 0, bc = 0;

		for (int i = n -1; i >= 0; i--)
		{
			if (a >= pow(2,i)) {
				ac++;
				a -= pow(2,i);
			}
			if (a == 0){
				break;
			}
		}
		cout << "ac = " << ac << endl;
		for (int i = n -1; i >= 0; i--)
		{
			if (b >= pow(2,i)) {
				bc++;
				b -= pow(2,i);
			}
			if (b == 0){
				break;
			}
		}
		cout << "bc = " << bc << endl;

		if ((ac + bc )> n){
			int res =0;
			for (int i = n-1; i >= 0 ; i--)
			{
				res += pow(2,i);
				
			}
			for (int i = 0; i < (ac +bc - n); ++i)
			{
				res -= pow(2,i);
			}
			cout << res << endl;

		}else if((ac + bc) == n ){
			int res =0;
			for (int i = n-1; i >= 0 ; i--)
			{
				res += pow(2,i);
				
			}
			cout << res << endl;
		}
		else{
			int res =0;
			for (int i = n-1; i >= ( n - ac - bc) ; i--)
			{
				res += pow(2,i);
				
			}
			cout << res << endl;
			
		}
	}
	return 0;
}