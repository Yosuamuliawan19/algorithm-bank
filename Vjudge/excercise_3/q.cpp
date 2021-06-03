#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string x;
	cin >> x;
	int u=0 , l=0;
	for (int a = 0;a<x.length();a++){

		if (x[a] >= 97){
			l ++;
		}else{
			u ++;
		}
	}

	if (l >= u ){
		for (int i = 0; i < x.length(); ++i)
		{
			x[i] = tolower(x[i]);
		}
		
	}else{
		for (int i = 0; i < x.length(); ++i)
		{
			x[i] = toupper(x[i]);
		}
	}
	cout << x << endl;
	
	return 0;
}