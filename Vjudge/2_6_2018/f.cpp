#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main (){
	double x ;
	cin >> x;
	
	int p1 = 31;
	
	int bin[32] = {0}; 
	while (x != 0 ){
		if ( x / pow(2,p1) >= 1){
			x -= pow(2,p1);
			bin [p1] = 1;
		}
		p1 -- ;
	}
	/*
	for (int i = 31 ;i >= 0;i--){
		cout << bin[i];
	}
//	cout << endl << endl;
	for (int i = 0 ;i  < 32;i++){
	//	cout << bin[i];
	}
	//cout << endl << endl;*/
	int tot = 0;

	int curp = 0;
	bool first = false;
	for (int i = 31 ;i >= 0;i--){
		if (bin[i] == 1){
			first = true;
			tot += pow(2,curp);
		}
		if (first) curp ++;
	}
	cout << tot << endl;
	
	return 0;
}
