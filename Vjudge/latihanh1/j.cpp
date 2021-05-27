#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	char x ;
	int a , b,  c, d;
	int plus = 0, times = 0;
	cin >> a >> b >> c >> d;
	for (int i = 0; i < 3; ++i)
	{
		cin >> x;
		if (x == '+'){
			plus ++;
		}else{
			times++;
		}
	}
	if ( plus == 3 ){
		cout << a + b + c + d;
	}else if ( times == 3){
		cout << a * b * c * d;
	}else{
 		int arr[4];
 		arr[0] = a;
 		arr[1] = b;
 		arr[2] = c;
 		arr[3] = d;
 		sort(arr, arr +4);
 		if (times == 2){
 			cout << arr[0] *arr[1] * arr[2] + arr[3];
 			return 0;
 		}else{
 			cout << arr[0] * arr[1] +arr[2] + arr[3];
 		}
	}
	return 0;
}