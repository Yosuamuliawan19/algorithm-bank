#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n ;
	cin >> n;
	int start ;
	int start2;
	int count  =0;
	bool f = false;
	int en ;
	for (int i = 1; i <= n; ++i)
	{	
		int y;
		cin >> y;
		if (!f){
			if (y != i){
				start = y;
				if (count == 0){
					start2 = i;
				}
				
				f = true;

			}
		}

		if (f){
			 if (y == start){
				start--;
			}else{
				if (count == 0){
					en = i - 1;
				}
				count ++;
				f = false;
			}
			if (i == n){
				if (count == 0){
					en = i;
				}
			}
		}
		if (count > 1){
			cout << "0 0";
			return 0;
		}
	}
	cout << start2 << " "<<en;

	
	return 0;
}