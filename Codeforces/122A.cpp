#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	int input;
	cin >> input;
	bool flag = false;

	int arr[] = { 4, 7, 47, 44, 74, 77, 444, 447, 477, 777, 774, 744, 474, 747 };
	for (int i = 0; i < 14; ++i)
	{
		if (input % arr[i] == 0){
			flag = true;
			break;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;
}