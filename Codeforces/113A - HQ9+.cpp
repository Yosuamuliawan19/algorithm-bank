#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	char x[100];
	cin >> x;
	int len  = strlen(x);
	bool flag = false;
	for (int i = 0; i < len; ++i)
	{
		char y = x[i];
		if (y == 'H' || y == 'Q' || y == '9') flag = true;
	}
	if (flag) cout << "YES";
	else cout << "NO";

	return 0;
}