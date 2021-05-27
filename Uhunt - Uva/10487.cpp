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
	int cas = 1;
	while (true){
		int n;
	cin >> n;
	if (n ==0 )break;
	vector <int> arr;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	cout << "Case " << cas<<  ":" << endl; 
	cas++;
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int temp;
		cin >> temp;
		int min = 999999999;

		for (int i1 = 0; i1 < n; ++i1)
		{
			for (int i2 = 0; i2 < n ; i2 ++)
			{
				if (i1 == i2 ){
					continue;
				}
				int x = arr[i2] + arr[i1];
				
				
				if (abs(x - temp) < abs(min - temp)){
				 	min = x;
				}
			}
		}
		cout << "Closest sum to " << temp << " is " << min << "." << endl;
	} 
	
	}
	
	return 0;
}