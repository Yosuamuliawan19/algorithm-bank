#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int x;
	cin >> x;
	int arr[101];
	for (int i = 0; i < x; ++i)
	{
		cin >> arr[i];
	}
	// bubble sort
	while (true){
		bool b = false;
		for (int i = 0; i < x-1; ++i)
		{
			if (arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				b = true;
			}
		}
		if (!b) break;
	}

	int iteration = 0;
	int current_sum = 0;
	int total =0;
	for (int g = 0; g < x; ++g)
	{
		total += arr[g];
	}
	for (int i = x-1; i >=0 ; --i)
	{
		total -= arr[i];
		iteration += 1;
		current_sum += arr[i];
		if (current_sum > total){
			cout << iteration;
			break;
		}

	}
	return 0;
}