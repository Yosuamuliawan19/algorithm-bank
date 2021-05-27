#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<math.h> 
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int d;
		cin >> d;
		unsigned long long int tot = 1;
		for (int i1 = 0; i1 < d; ++i1)
		{
			unsigned long long int temp;
			cin >> temp;
			tot *= temp;
		}
		unsigned long long int tot2 = 1;
		for (int i1 = 0; i1 < d; ++i1)
		{
			unsigned long long int temp;
			cin >> temp;
			tot2 *= temp;
		}
		
		if (tot > tot2){
			cout << "Kasus #" << i+1 << ": " << pow( (double) tot /  (double) tot2, (1.0 / (double) d))  << endl;
		}else{
			cout << "Kasus #" << i+1 << ": " << pow( ((double)tot2/ (double)tot) , (1.0 / (double) d)) << endl;
		}
		
	}
	return 0;
}