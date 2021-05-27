#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	int index;
	int steps = 0;
	for (int i = 0; i < 25; ++i)
	{
		int x;
		cin >> x;
		if(x == 1){
			index = i;
			break;
		} 
	}
	if (index < 5){
		steps += 2;
		steps += abs(2 - index);
	}else if(index < 10){
		steps += 1;
		steps += abs(7 - index);
	}else if(index < 15){
		steps += abs(12 - index);
	}else if(index < 20){
		steps += 1;
		steps += abs(17 - index);
	}else{
		steps += 2;
		steps += abs(22 - index);
	}
	cout << steps;
	return 0;
}