#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int am;
	cin >> am;
	int arr[1001][4] = {};
	int temp;
	char x;
	int piles = 0;
	for (int i = 0; i < am; ++i)
	{
		int a , b ,c ,d;
		cin >> a >> b >> d >> c;
		if (i != am -1){
			cin >> x >> x;
		}
		
		//cout << "ok" << endl;
		bool exist = false;
		for (int i1 = 0; i1 < 4; ++i1)
		{
			
			for (int i2 = 0; i2 < piles; ++i2)
			{
				//cout << a << b << c << d << endl;
				if (arr[i2][0] == a && arr[i2][1] == b
					&& arr[i2][2] == c && arr[i2][3] == d){
					exist = true;
					break;
				}
			}
			if (exist){
				break;
			}
			if (i1 == 3 && !exist){
				
				arr[piles][0] = a;
				arr[piles][1] = b;
				arr[piles][2] = c;
				arr[piles][3] = d;
				//cout << " pile added" << endl;
				piles ++;
			}
			
			temp = d;
			d = c;
			c = b;
			b = a;
			a = temp;

		}

	}
	cout << piles;
	return 0;
}