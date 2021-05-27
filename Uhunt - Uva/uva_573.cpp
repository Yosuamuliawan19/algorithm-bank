#include<iostream>
using namespace std;
int main(){
	while (true){
		double h, u ,d ,f;
		cin >> h ; cin >> u;cin >> d;cin >> f;
		if (h == 0){
			break;
		}

		int day = 1;
		double distance = 0;

		while (true){
			distance += u;
			if (distance >= h ){ cout << "success on day " << day << endl;break;}
			if (distance < 0 ){ cout << "failure on day " << day << endl;break;}
			distance -= d;
			day+= 1;
			u = u - (f/100)*u;
		}

	}

	return 0;
}