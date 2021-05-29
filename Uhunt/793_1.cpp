#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<sstream>
#include<vector>
#define LL  long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
vector<int> parents;
int fp (int b){
	return (parents[b] == b ? b : parents[b] = fp(parents[b]));
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		parents.clear();
		int s;
		cin >> s;
		cin.ignore();

		for (int i1 = 0; i1< s + 1; ++i1)
		{
			parents.push_back(i1);
		}
		int suc = 0, unsuc = 0;

		while(true){
			string line;
			getline(cin , line);
			if (line.length() == 0 ) break;

			stringstream iss(line);
			

			char a ;
			int b , c;
			iss >> a >> b >> c;

			if (a == 'c'){
			
				if (fp(b) != fp(c)){

					if (b > c){
						parents[fp(b)] = c;
					}else{
						parents[fp(c)] = b;
					}
				}
				
			}else{
				if (fp(b) != fp(c)){
					unsuc ++; 
				}else{
					suc++;
				}
			}
		}
		cout << suc <<" , " << unsuc << endl;
		if (i != n-1){
			cout << endl;
		}
	}
	return 0;
}