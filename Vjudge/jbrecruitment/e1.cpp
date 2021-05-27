#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	cin.ignore(); 
	for (int i1 = 0; i1 < x; ++i1)
	{
		string y;
		getline(cin , y);
		int cnt = 0;
		string app = "APPLE";
		for (int i = 0; i < y.length(); ++i)
		{
			if (y[i] >= 97 && y[i] <= 122){
				y[i] -= 32;
			}
		}
		for (int i = 0; i < y.length(); ++i)
		{
			//cout << " Comparing " << y[i] << " " << app[cnt] << endl;
			if (y[i] == app[cnt]){
				cnt ++;
			}else{
				cnt = 0;
			}

			if (cnt == 5){
				cnt = 0;
				//cout << "apple found" << endl;
				//cout << y[i+1] << endl;
				bool english = false;
				if ( (i+1 == y.length() || y[i+1] == 32) &&
					(i-5 == -1 || y[i-5] == 32)
					){
					cout << "Kasus #" << i1 + 1 << ": Inggris" << endl;
					break;
				}

				


			}
			if (i == y.length() - 1 ){
				cout << "Kasus #" << i1 + 1 << ": Indonesia" << endl;
				break;
			}
		}
	}
	return 0;

}