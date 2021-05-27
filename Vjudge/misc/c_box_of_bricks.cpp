#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int set = 1;
	while (true){
	int x;
	cin >> x;
	if (x == 0) break;
	int arr[50] = {};

	int total = 0;
	for (int i = 0; i < x; ++i)
	{
		int y;
		cin >> y;
		arr[i] = y;
		total += y;
	}

	int mean = total / x;

	int done = 0;
	int moves = 0;
	while (true){
		
		if (arr[done] == mean){
			done ++;
			if (done == x){
				break;
			}
			continue;
		}else if (arr[done] > mean){
			arr[done]--;
			for (int i = done; i < x; ++i)
			{
				if (arr[i] < mean){
					arr[i]++;
					//cout << "move "<< done << " to " << i << endl;
					moves ++;
					break;
				}
			}

		}else{
			arr[done]++;
			for (int i = done; i < x; ++i)
			{
				if (arr[i] > mean){
					arr[i]--;
					//cout << "move "<< i << " to " << done << endl;
					moves ++;
					break;
				}
			}
		}

	}
	cout << "Set #" << set << endl;
	cout << "The minimum number of moves is " << moves  << "."<< endl << endl;
	set ++;
}
	return 0;
}