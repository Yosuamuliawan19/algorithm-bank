#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	vector <pair < int , int > > n;
	vector <int> no;
	n.clear();
	for (int i = 0; i < x; ++i)
	{
		long long temp, temp1;
		cin >> temp >> temp1;
		n.push_back(make_pair(temp,temp1));
		int total = 0 ;
		for (int i1 = 0; i1 < n.size() ; i1 ++)
		{
			if (n[i].first == temp || n[i].first == temp1 || n[i].second == temp || n[i].second == temp1){
				no[i] ++;
				total ++;
			} 
		}
		no.push_back(total);
	}
	sort(no.begin(), no.begin() + x);
	cout << no[x-1] << endl;
	return 0;
}