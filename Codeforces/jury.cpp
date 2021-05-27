
#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

	int k;
	int n;
	int arrk[2001] = {};
	int arrn[2000] = {0};
	cin >> k >> n>>arrk[0];
	int result[100] = {0};
	int nres =0;
	for (int i = 1; i < k; ++i)
	{
		int t;
		cin >> t;
		arrk[i] = arrk[i - 1] + t;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> arrn[i] ;

	}
	for (int i = 0; i < k; ++i)
	{
		int ans;
		ans = arrn[0] - (arrk[i]);
		cout << ans << endl;
		bool insert = true;
		for (int j=0;j<nres;j++){
			if (result[j]  == ans){
				insert = false;
			}
		}
		if (insert == true){


		}
	}
	for (int j=0;j<nres;j++){
		cout << result[j] << endl;
		}
	return 0;
}