#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	while (true){
		double d , down , amount, c;
		cin >> d >> down >> amount >> c;
		if (d < 0) break;

		double value = down + amount;
		double permonth = amount / d;
		double owe = amount;

		int iter = c;
		double deps[101];
		for (int x=0;x<101;x++){
			deps[x] = 0;
		}
		while (c--){
			int x ;
			double y;
			cin >> x >> y;
			deps[x] = y;
		}
		double curdep = deps[0];
		for (int x=0;x<d +1;x++){
			if (curdep != deps[x] && deps[x] != 0){
				curdep = deps[x];
				
			}
			if (iter == 1 && x > 0) curdep = 0;

			value -= value * curdep;
			//cout << "curdep  " << curdep << endl;
			//cout << "value   " << value << endl;
			if (owe < value){
				//cout << endl <<  "done" << endl;
				if (x!= 1){
					cout << x << " months" <<endl;

				}else{
					cout << x << " month" <<endl;
				}
				
				break;
			}
			owe -= permonth;
			//cout << "owe     " << owe << endl;
			
		}

		
	}
	
	return 0;
}