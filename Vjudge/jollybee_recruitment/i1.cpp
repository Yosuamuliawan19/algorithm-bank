#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin >> a >> b >> c;


	for (int i = 0; i < a; ++i)
	{
		cout << " ";
	}
	for (int i = 0; i < c + 1; ++i)
	{
		cout << "_";
	}
	cout << endl;
	if (a > b){
		for (int i1 = 0; i1 < b; ++i1)
		{
			for (int i = 0; i < a - i1 -1 ; ++i)
			{
				cout << " ";
			}
			cout << "/";
			for (int i = 0; i <= i1 - 1; ++i)
			{
				cout << "  ";
			}
			cout << "\\";
			if (i1 == b-1){
				for (int i = 0; i < c; ++i)
				{
					cout << "_";
				}
				cout << "\\" << endl;
			}else{
				for (int i = 0; i < c; ++i)
				{
					cout << " ";
				}
				cout << "\\" << endl;
			}
		}
		for (int i1 = 0; i1 < a - b; ++i1)
		{
			for (int i = 0; i < a - i1 - b -1 ; ++i)
			{
				cout << " ";
			}
			cout << "/";
			for (int i = 0; i < b - 1; ++i)
			{
				cout << "  ";
			}
			cout << " ";
			cout << "/";
			for (int i = 0; i < c; ++i)
			{
				cout << " ";
			}
			cout << "/" << endl;
		}

		for (int i1 = 0; i1 < b; ++i1)
		{
			for (int i = 0; i < i1; ++i)
			{
				cout << " ";
			}
			cout << "\\";
			for (int i = 0; i < b - 1 - i1; ++i)
			{
				cout << "  ";
			}
			cout << "/";
			if (i1 == b -1 ){
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

			
			cout <<  "/"<<endl;
		}
	}else if (a < b){
		for (int i1 = 0; i1 < a; ++i1)
		{
			for (int i = 0; i < a - i1 -1 ; ++i)
			{
				cout << " ";
			}
			cout << "/";
			for (int i = 0; i <= i1 - 1; ++i)
			{
				cout << "  ";
			}
			cout << "\\";
			if (i1 == b-1){
				for (int i = 0; i < c; ++i)
				{
					cout << "_";
				}
				cout << "\\" << endl;
			}else{
				for (int i = 0; i < c; ++i)
				{
					cout << " ";
				}
				cout << "\\" << endl;
			}
		}
		for (int i1 = 0; i1 < b - a ; ++i1)
		{
			for (int i = 0; i < i1 ; ++i)
			{
				cout << " ";
			}
			cout << "\\";
			for (int i = 0; i < a - 1; ++i)
			{
				cout << "  ";
			}
			cout << " ";
			cout << "\\";
			if (i1 == b - a -1){
				for (int i = 0; i < c; ++i)
				{
					cout << "_";
				}
				cout << "\\" << endl;
				break;
			}
			for (int i = 0; i < c; ++i)
			{
				cout << " ";
			}
			cout << "\\" << endl;
		}

		for (int i1 = 0; i1 < a; ++i1)
		{
			for (int i = 0; i < i1 + b - a; ++i)
			{
				cout << " ";
			}
			cout << "\\";
			for (int i = 0; i < a - 1 - i1; ++i)
			{
				cout << "  ";
			}
			cout << "/";
			if (i1 == a -1 ){
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
			cout <<  "/"<<endl;
		}
	}else{
		for (int i1 = 0; i1 < a; ++i1)
		{
			for (int i = 0; i < a - i1 -1 ; ++i)
			{
				cout << " ";
			}
			cout << "/";
			for (int i = 0; i <= i1 - 1; ++i)
			{
				cout << "  ";
			}
			cout << "\\";
			if (i1 == b-1){
				for (int i = 0; i < c; ++i)
				{
					cout << "_";
				}
				cout << "\\" << endl;
			}else{
				for (int i = 0; i < c; ++i)
				{
					cout << " ";
				}
				cout << "\\" << endl;
			}
		}

		for (int i1 = 0; i1 < a; ++i1)
		{
			for (int i = 0; i < i1 + b - a; ++i)
			{
				cout << " ";
			}
			cout << "\\";
			for (int i = 0; i < a - 1 - i1; ++i)
			{
				cout << "  ";
			}
			cout << "/";
			if (i1 == a -1 ){
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
			cout <<  "/"<<endl;
		}
	}
	return 0;
}