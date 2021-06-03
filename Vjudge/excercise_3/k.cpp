#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	cin >> n;
	int sum;
	string arr[11] ={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	for (int i1 = 0; i1 < n; ++i1)
	{
		string x;
		cin >> x;
		if (!(x[0] < 60)){
			bool flag = true;
			for (int i = 0; i < 11; ++i)
			{
				if (x == arr[i]){
					flag = false;
					break;
				}
			}
			if (flag){
				sum ++;
			}
		}else {

			int y = stoi(x);
			if (y< 18){
				sum ++;
			}
		}
		
	}
	cout << sum;
	return 0;
}