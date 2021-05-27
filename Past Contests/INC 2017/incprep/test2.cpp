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

	vector <pair < long long  , long long > > n;
	vector <int> no;
	n.clear();

	for (int i = 0; i < x; ++i)
	{
		long long temp, temp1;
		cin >> temp >> temp1;
		n.push_back(make_pair(temp,temp1));

		int total = 0 ;
		// cout << n.size();
		for (int i1 = 0; i1 < n.size() - 1 ; i1 ++)
		{
			//cout << "first " << n[i].first << " second "<< n[i].second << endl;
			if ((n[i1].first == temp && n[i1].second != temp1)
				|| (n[i1].second == temp1 && n[i1].first != temp) ){
				//cout << "match" << endl;
				no[i1] ++;
				total ++;
			}
			
		}
		no.push_back(total);
	}
	
	//for (int i = 0; i < no.size(); ++i)
	//{
	//	cout << no[i] << endl;
	//}
	sort(no.begin(), no.begin() + x);
	
	//cout << "res" << endl;
	cout << no[x-1] << endl;
	return 0;
}