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
	
	int n;
	while (cin >> n){
	int arr[10001] = {};
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	int mon = 0;
	cin >> mon;
	int temp;
	if (!cin >> temp){
		break;
	}

	int min = 1000001, first = 0, second = 0;
	for (int i = 0; i < n; ++i)
	{
		int cur = mon - arr[i];
		int left = i + 1, right = n - 1;
		while (true){
			int mid = (left + right) / 2;
			if (left >= right) break;
			if (arr[mid]  == cur) {
				if (abs(arr[i] - cur) < min){
					if (cur < arr[i]){
						first = cur;
						second = arr[i];
					}else{
						first = arr[i];
						second = cur;
					}
				}
				break;
			}
			if (arr[mid]  >cur){
				right = mid;
			}else{
				left = mid;
			}
		}
	}
		cout << "Peter should buy books whose prices are "<<first << " and " << second << "." <<  endl << endl;
	}
	
	
	return 0;
}