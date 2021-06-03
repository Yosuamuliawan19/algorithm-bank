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
	int n;
	while(cin >> n){
		if (n == 0){
			break;
		}
		int vio[201] = {};
		int col[100] = {0};
		int vios = 0;
		for (int i = 0; i < n; ++i)
		{
			int rowtot = 0;
			for (int i1 = 0; i1 < n ; i1 ++)
			{
				int temp;
				cin >> temp;
				col[i1] += temp; 
				rowtot += temp;
			}
			if (!(rowtot == 0 || rowtot % 2 == 0)){
				vio[vios] = i;
				vios ++;
			}
		}
		int vioscol = 0;
		for (int i = 0; i < n; ++i)
		{
			if (!(col[i] == 0 || col[i] % 2 == 0)){
				vio[vioscol + 100] = i;
				vioscol ++;
			}
		}
		if (vioscol + vios == 0){
			cout << "OK" << endl;
		}else if (vios == 1 && vioscol == 1){
			cout << "Change bit (" << vio[0] + 1 << ","<<vio[100] +1 <<")"<<endl;
		}else{
			cout << "Corrupt" << endl;
		}

	}
	
	return 0;
}