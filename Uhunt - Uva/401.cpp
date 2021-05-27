#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#include<map>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
map <char , char > m;
bool mirror (string x){
	for (int i = 0; i < x.length()/2; ++i)
	{
		if (x[i] != m[x[x.length() - 1 - i]]){
			return false;
		}
	}
	return true;
}
bool pal (string x){
	for (int i = 0; i < x.length()/2; ++i)
	{
		if (x[i] != x[x.length() - 1 - i]){
			return false;
		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
	string ori = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	string mir = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	for (int i = 0; i < ori.length(); ++i)
	{
		m[ori[i]] = mir[i];
	}
	string mystring;
	while (cin >> mystring ){
		bool mir = mirror(mystring);
		bool palin = pal(mystring);

		if (mir & palin ){
			cout << "-- is a mirrored palindrome." << endl << endl;
		}else if (mir ){
			cout << "-- is a mirrored string." << endl << endl;
		}else if ( palin ){
			cout << "-- is a regular palindrome." << endl << endl;
		}else {
			cout << "-- is not a palindrome." << endl << endl;
		}
	}
	
	return 0;
}