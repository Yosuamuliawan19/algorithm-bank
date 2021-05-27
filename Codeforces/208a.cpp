#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main(int argc, char const *argv[])
{
	string n;
	cin >> n;

	string ans;
	for (int i = 0; i < n.length(); ++i)
	{
		//cout << n.substr(i,3) << endl;
		if (n.substr(i,3) == "WUB"){
			i+= 2;
		}else{
			//cout << "haha " << n[i] << endl;
			ans+= n[i] ;
			if (n.substr(i+1,3) == "WUB"){
				ans+= " ";
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}