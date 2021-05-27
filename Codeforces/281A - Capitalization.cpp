#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	string x;
	cin >> x;
	if (!(x[0] >= 65 && x[0] <= 90))
		x[0] -= 32;
	cout << x;
	return 0;

}