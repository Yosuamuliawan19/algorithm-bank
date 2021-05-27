#include<iostream>
using namespace std;
int main (){

	int n , k , c;
	cin >> n >> k >> c;
	int sum = 0;
	int arr[366] = {};
	int cur = 0;
	int count = 1;
	for (int i = 0; i < c; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		if (i == arr[cur]){
			sum++;
			count = 1;
			cur ++;
		}else if (count % k == 0){
			sum ++;
			count = 1;
		}else{
			count ++;
		}

	}
	cout << sum;
	/*
	int prev = 0;
	
	for (int i = 0; i < c; ++i)
	{
		int y;
		cin >> y;
	 	sum += ( y - prev )/ k;
	 	prev = y;

	}
	sum += (n - prev )/ k ;
	cout << sum;
	*/
}