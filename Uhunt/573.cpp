#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	while (1){
		double h, u, d, f;
		cin >> h >> u >> d >> f;
		if (h == 0){
			break;
		}

		double fat = u * f / 100;
		double p = 0;
		int day = 1;
		while (1){
			
			p += u;
			if (p > h){
				cout << "success on day " << day << endl;
				break;
			}

			p -= d;
			if (p < 0){
				cout << "failure on day " << day << endl;
				break;
			}
			
			//cout << " day " << day << " init height " << p - u  + d << " climbed "<< u << " cur height " << p + d << " after slide "<< p << endl;  

			u -= fat;
			if (u < 0){
				u = 0;
				
			}
			day ++;
		}
	}
	return 0;
}