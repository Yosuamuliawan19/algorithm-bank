#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
string reverse(string a){
	char temp ;
	int n = a.length();

	for (int i = 0; i < n /2 ; ++i)
	{
		temp = a[i];
		a[i] = a[ n - i - 1];
		a[ n- i - 1] = temp;
	}
	//cout << a << endl;
	return a;
}
string rem (string a){
	int n = a.length();
	int count = 0;
	string res(n , ' ');

	for (int i = 0; i < n; ++i)
	{

		if (a[i] == '?' ||
		a[i] == ',' ||
		a[i] == '.' ||
		a[i] == '!' ||
		a[i] == ' '){
		}else{
			res[count] = a[i];
			count ++ ;
		}
	}
	for (int i = 0; i < count; ++i)
	{
		if (res[i] < 97){
			res[i] += 32;
		}
	}
	//cout << res << endl;
	return res;
	
}
int main(int argc, char const *argv[])
{
	while(1){
		string in;
		getline(cin, in);
		if (in == "DONE"){
			break;
		}
		string c1 = rem(in);
		string c2 = rem(reverse(in));
		if (c1 == c2 ){
			cout << "You won't be eaten!" << endl;
		}else{
			cout << "Uh oh.." <<endl;
		}
	}
	return 0;
}