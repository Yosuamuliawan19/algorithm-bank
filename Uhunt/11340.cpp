#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int k;
		cin >> k;
		map<char,int> m;
		m.clear();
		for (int i1 = 0; i1 < k ; i1 ++)
		{
			int a;char b;
			cin >> b >> a;
			m[b] = a;
		}
		int ma;
		cin >> ma;
		cin.ignore();
		//cout << ma << " hahaha" << endl;

		string x = "";

		for (int i1 = 0; i1 < ma; i1 ++)
		{
			string y;
			getline(cin , y);
			x+= y;
		}
		long long tot = 0;
		
		for (long long i1 = 0; i1 < x.length() ; i1 ++)
		{
			tot += m[x[i1]];
		}
		//cout << tot << endl;
		if (tot > 99){
			cout << tot / 100 << "." ;
			if (tot % 100 > 9){
				cout << tot % 100 <<"$"<<endl;
			}else{
				cout << "0"<<tot % 100 <<"$"<<endl;
			}
			
		}else if (tot < 10){
			cout << "0.0" << tot <<"$"<< endl;
		}else{
			cout << "0." << tot <<"$"<< endl;
		}
		
	}
	
	return 0;
}