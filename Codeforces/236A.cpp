#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[26] = {0};
	char input[100];
	cin >> input;
	for (int i = 0; i < strlen(input); ++i)
	{
		arr[ (input[i] - 97) ] = 1;

	}
	int count = 0;
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] == 1) count++;
	}
	if (count % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
	return 0;
}