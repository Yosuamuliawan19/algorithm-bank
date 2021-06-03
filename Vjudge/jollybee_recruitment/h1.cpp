#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<math.h>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	for (int i = 0; i < tc; ++i)
	{
		double x;
		cin >> x;

		double temp = pow(x,3);
		double temp1 = pow(x,2);
		temp = (temp * temp1  + 1 ) / (x + 1);

		cout << "Kasus #"<< i +1<< ": " << temp << endl;
		//cout << "Kasus #"<< i +1<< ": " << fixed << setprecision(0)<< temp << endl;
		//"<< fixed << setprecision(0)
	}
	return 0;
}