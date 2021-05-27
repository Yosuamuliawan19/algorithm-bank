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
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int f;
		cin >> f;
		vector <int> sm;
		map <string, int> people;
		for (int i1 = 0; i1 < f ; i1 ++)
		{
			string x , y ;
			cin >> x >> y;
			if (people.find(x) == people.end()){
				sm.push_back(1);
				people[x] = sm.size() - 1;
			}else if()
		}
	}
	return 0;
}