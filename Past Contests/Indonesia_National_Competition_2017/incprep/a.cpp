#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	double h , u , d , f;
	while (cin >> h >> u >> d >> f){
		if (h == 0){break;}
		double tot = 0;
		int day = 0;
		double fat = ( u * f /100);
		while (tot < h){ 
			//cout << " initial " << tot;
			day++;
			tot += u;
			//cout << " after climbing " << tot;
			if (tot < 0){
				break;
			}else if(tot > h){
				break;
			}
			tot -= d;
			//cout << " after sliding " << tot << endl;
			u -= fat;
			if (u < 0){
				u = 0;
			}
			if (tot < 0){
				break;
			}else if(tot > h){
				break;
			}
			
		}
		if (tot >= h){
			cout << "success on day " << day << endl;
		}else{
			cout << "failure on day " << day << endl;
		}
		
	}
	
	return 0;
}