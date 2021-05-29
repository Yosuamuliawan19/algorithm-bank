#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while (cin >> n){
		if (n < 1){
			cout << "Not jolly" << endl;
			continue;
		}
		int prev;
		bool arr[3001] = {false};
		cin >> prev;
		if (n == 1){
			cout << "Jolly" << endl;
			continue;
		}
		for (int i = 1; i < n; ++i)
		{
			int x;
			cin >> x;
			//cout << " "<< abs(x - prev) << endl;
			arr[abs(x - prev)] = true;
			prev = x;
		}
		bool flag = true;
		for (int i = 1; i < n; ++i)
		{
			if (!arr[i]){
				flag = false;
			}
		}
		if (flag){
			cout << "Jolly" << endl;
		}else{
			cout << "Not jolly" << endl;
		}
	}
	
	return 0;
}