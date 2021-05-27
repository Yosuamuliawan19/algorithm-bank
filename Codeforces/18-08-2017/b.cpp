#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int l;
	cin >> l;

	bool odd = true;

	bool firstodd = true;
	int box[1000001];
	int n;
	int counter = 0;
	int size = 0;

	cin >> n;
	if (n%2==0){
		odd = false;
		 firstodd = false;

	} 
	counter ++;

	for (int i = 0; i < l -1; ++i)
	{

		cin >> n;
		if (n%2 == 0){
			if (!odd){
				counter ++;
				
			}else{
				odd = false;
			box[size] = counter;
			counter = 1;
			size ++;
			}
			
		}else{
			if (odd){
				counter ++;
			}else{
				odd = true;
				box[size] = counter;
				counter = 1;
				size ++;
			}
		}
		if (i == l -2){
			//cout << "endl" << endl;
			box[size] = counter;
				counter = 1;
				size ++;
		}
		
	}
	for (int i = 0; i < size; ++i)
	{
		//cout << box[i] << endl;
	}
	int cur = box[0];
	for (int i = 1; i < size; ++i)
	{
		cur = cur ^ box[i];
	}
	if (firstodd){
		if (size % 2 != 0 ) cout << "First";
		else if (size == 4){
			cout << "First";
		}
		else cout << "Second";
	}else{
		if (size % 2 != 0) cout << "Second";
		else if (size == 4){
			cout  << "First";
		}else cout  << "Second";
	}


	return 0;
}