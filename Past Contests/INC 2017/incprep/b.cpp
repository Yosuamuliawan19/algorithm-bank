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
	string s;
	int cas = 1;
	while(cin >> s){
		int n;
		cin >> n;
		cout << "Case " << cas << ":"<<endl;
		cas ++;

		for (int i = 0; i < n; ++i)
		{
			int l,r;
			cin >> l >> r;
			bool iszero = false;
			if (l > r){
				int temp = l;
				l = r;
				r = temp;
			}
			if (s[l] == '0'){
				iszero = true;
			//	cout << "Zero" << endl;
			}
			bool suc = true;

			for (int i1 = l; i1 <= r; ++i1)
			{
				//cout << s[i1] << endl;
				if (iszero){
					if (s[i1] == '1'){
						suc = false;
						cout << "No" << endl;
						break;
					}
				}else{
					if (s[i1] == '0'){
						suc = false;
						cout << "No" << endl;
						break;
					}
				}
			}
			if (suc){
				cout << "Yes"<<endl;
			}
		}
	}
	return 0;
}