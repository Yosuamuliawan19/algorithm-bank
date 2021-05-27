#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	int cas = 1;
	//fill(begin(arr), end(arr), 0);
	while (getline(cin,a)){

		int arr[3][3] = {0};
		for (int i = 0; i < a.length(); ++i)
		{
			int move = a[i] - 97;
			//cout << move << endl;
			int row = 0;
			if (move > 5){
				row = 2;
				move -= 6;
			}else if (move > 2){
				row = 1;
				move -= 3;
			}
			arr[row][move] ++;
			if (move + 1 <= 2) arr[row][move + 1] ++;
			if (move - 1 >= 0) arr[row][move - 1] ++;
			if (row + 1 <= 2) arr[row+1][move] ++;
			if (row - 1 >= 0) arr[row-1][move] ++;
			for (int i = 0; i < 3; ++i)
			{
				for (int i1 = 0; i1 < 3 ; i1 ++)
				{
					if (arr[i][i1] > 9){
						arr[i][i1] = 0;
					}
				}
			}
		}
		cout << "Case #" << cas << ":" <<  endl;
		cas ++ ;
		for (int i = 0; i < 3; ++i)
			{
				for (int i1 = 0; i1 < 3 ; i1 ++)
				{
					cout << arr[i][i1];
					if (i1 != 2)
					cout << " ";
				}
				cout << endl;
			}
		
	}
	return 0;
}