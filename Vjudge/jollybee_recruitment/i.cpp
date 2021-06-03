#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin >> a >> b >> c;

	for (int i1 = 0; i1 < a+b+1 ; ++i1)
	{
		if (i1 == 0){
			cout << "s1 " ;
			for (int i = 0; i < a; ++i)
			{
				cout << " ";
			}
			for (int i = 0; i < c + 1; ++i)
			{
				cout << "_";
			}
		}
		else if (a <= b && i1 <= a){
			cout << "s2 " ;
			for (int i = 0; i < a - i1; ++i)
			{
				cout << " ";
			}

			
				cout << "/" ;
				for (int i = 0; i < (i1 - 1) * 2; ++i)
				{
					cout << " ";
				}
				cout << "\\";
				if ( a == b && i1 == a){
					for (int i = 0; i < c; ++i)
					{
						cout << "_";
					}
				}else{
					for (int i = 0; i < c; ++i)
					{
						cout << " ";
					}
				}
				cout << "\\";
		}else if (){

		}else if (i1 <= b){
			cout << "s3 " ;
			if (a >= b){
				for (int i = 0; i < i1 - a - 1 ; ++i)
				{
					cout << " " ;
				}
				cout << "\\";
				for (int i = 0; i < ((a - 1) * 2 + 1); ++i)
				{
					cout << " " ;
				}
				cout << "\\";
				if (i1 == b){
					for (int i = 0; i < c; ++i)
					{
						cout << "_" ;
					}
				}else{
					for (int i = 0; i < c; ++i)
					{
						cout << " " ;
					}
				}
				cout << "\\";
			}else{
				cout << "/";
				cout << "/";
				cout << "/";
			}
			
			cout << i1 - a - 1 ;
		
		}
		else{
			cout << "s4 ";
			for (int i = 0; i < i1 - a - 1  ; ++i)
			{
				cout << " " ;
			}
			cout << "\\";
			for (int i = a - (i1 - b) ; i > 0 ; --i)
			{
				cout << "  " ;
			}
			cout << "/" ;
			if (i1 == a + b){
				for (int i = 0; i < c; ++i)
				{
					cout << "_" ;
				}
			}else{
				for (int i = 0; i < c; ++i)
				{
					cout << " " ;
				}
			}
			
			cout << "/";
			cout << i1 - a - 1 ;
		}


		cout << endl;
	}
	return 0;
}