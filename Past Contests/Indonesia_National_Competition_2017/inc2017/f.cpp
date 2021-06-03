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
	
	int n ,k ;
	cin >> n  >> k;
	int arr[100001] = {0};

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	
	vector <int> min;
	for (int i1 = 0; i1 < n; ++i1)
	{
		int cur = arr[i1];
		vector <int> temp;			
		for (int i2= 0; i2 < n ; i2 ++)
		{
			if (cur == arr[i2]){
				continue;
			}else{
				temp.push_back(abs(cur - arr[i2]));
			}
		}
		sort(temp.begin(),temp.end());
		int size = temp.size();
		min.push_back(temp[n- k]);
		cout << "pushed" << temp[n-k] << endl ;
		for (int i = 0; i < temp.size(); ++i)
		{
			cout << temp[i] << " " ;
		}
		cout << endl;
	}

	sort(min.begin(),min.end());
	cout <<	min[min.size() -1]  << endl;
	return 0;
}