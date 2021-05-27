#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

	string x,y,z;
	cin >> x;
	cin >> y;
	cin >> z;

	for (int a=0;a<z.length();a++){
		char g = z.at(a);

		bool caps = false;
		 if (g < 97){
		 	caps = true;
		 	g+= 32;
		}
		int h = x.find(g);

		if (caps){
			g-=32;
		}
		if (g < 65){
			cout << g ;
		}else{
			char ju = y.at(h);
			if (caps){ju -= 32;}
			cout <<  ju ;

		}
	}

	return 0;
}