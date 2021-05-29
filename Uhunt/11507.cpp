#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	while (1){
		int l = 0;
		cin >> l;
		if (l == 0) break;
		int c1 = 0;
		for (int i = 0; i < l-1; ++i)
		{
			string input;
			int c2 = 0;
			cin >> input;
			if (input == "No") continue;
			if (input == "+y") c2 = 2;
			if (input == "-y") c2 = 3;
			if (input == "+z") c2 = 4;
			if (input == "-z") c2 = 5;

			if (c1 == 0){
				if (c2 == 2) c1 = c2; 
				if (c2 == 3) c1 = c2; 
				if (c2 == 4) c1 = c2; 
				if (c2 == 5) c1 = c2; 
				continue;
			}
			if (c1 == 1){
				if (c2 == 2) c1 = 3; 
				if (c2 == 3) c1 = 2; 
				if (c2 == 4) c1 = 5; 
				if (c2 == 5) c1 = 4; 
				continue;
			}
			if (c1 == 2){
				if (c2 == 2) c1 = 1; 
				if (c2 == 3) c1 = 0; 
				if (c2 == 4) c1 = 2; 
				if (c2 == 5) c1 = 2; 
				continue;
			}
			if (c1 == 3){
				if (c2 == 2) c1 = 0; 
				if (c2 == 3) c1 = 1; 
				if (c2 == 4) c1 = 3; 
				if (c2 == 5) c1 = 3; 
				continue;
			}
			if (c1 == 4){
				if (c2 == 2) c1 = 4; 
				if (c2 == 3) c1 = 4; 
				if (c2 == 4) c1 = 1; 
				if (c2 == 5) c1 = 0; 
				continue;
			}
			if (c1 == 5){
				if (c2 == 2) c1 = 5; 
				if (c2 == 3) c1 = 5; 
				if (c2 == 4) c1 = 0; 
				if (c2 == 5) c1 = 1; 
				continue;
			} 

		}
			if (c1 == 0) cout << "+x" << endl;
			if (c1 == 1) cout << "-x" << endl;
			if (c1 == 2) cout << "+y" << endl;
			if (c1 == 3) cout << "-y" << endl;
			if (c1 == 4) cout << "+z" << endl;
			if (c1 == 5) cout << "-z" << endl;
		}

	return 0;
}