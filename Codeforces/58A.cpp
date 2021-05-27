#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string hello = "hello";
	string input;
	cin >> input;
	bool flag = false;
	int count = 0;
	for (int i = 0; i < input.length(); ++i)
	{
		if(input[i] == hello[count]){
			count++;
		}
		if(count == 5){
			flag = true;
			break;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;

}